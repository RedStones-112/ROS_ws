#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"
#include "first_package_msgs/msg/cmd_and_pose_vel.hpp"
#include "geometry_msgs/msg/twist.hpp"


using std::placeholders::_1;
using namespace std::chrono_literals;

class CmdAndPose : public rclcpp::Node
{
public:
    CmdAndPose() : Node("turtle_cmd_pose")
    {
        subscription_pose = this->create_subscription<turtlesim::msg::Pose>(
        "/turtle1/pose", 10, std::bind(&CmdAndPose::callback_pose, this, _1));

        subscription_cmd_vel = this->create_subscription<geometry_msgs::msg::Twist>(
        "/turtle1/cmd_vel", 10, std::bind(&CmdAndPose::callback_cmd, this, _1));

        publisher_ = this->create_publisher<first_package_msgs::msg::CmdAndPoseVel>("/cmd_and_pose_vel", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&CmdAndPose::timer_callback, this));

        message = std::make_shared<first_package_msgs::msg::CmdAndPoseVel>();
    }

private:
    void callback_pose(const turtlesim::msg::Pose & msg) 
    {
        message->pose_x = msg.x;
        message->pose_y = msg.y;
        message->linear_vel = msg.linear_velocity;
        message->angular_vel = msg.angular_velocity;
        
        
    }

    void callback_cmd(const geometry_msgs::msg::Twist & msg) 
    {
        // RCLCPP_INFO(this->get_logger(), "test_msg %f ", msg.angular.x);
        message->cmd_vel_angular = msg.linear.x;
        message->cmd_vel_linear = msg.angular.z;
    }

    void timer_callback(){
        publisher_->publish(*message);
        RCLCPP_INFO(this->get_logger(), "Pose: x=%f, y=%f, linear_velocity=%f, angular_velocity=%f, cmd_vel_angular=%f, cmd_vel_linear=%f", 
            message->pose_x, message->pose_y, message->linear_vel, message->angular_vel, message->cmd_vel_angular, message->cmd_vel_linear);

        
    }

    
    rclcpp::TimerBase::SharedPtr timer_;
    
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_pose;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr subscription_cmd_vel;

    rclcpp::Publisher<first_package_msgs::msg::CmdAndPoseVel>::SharedPtr publisher_;

    std::shared_ptr<first_package_msgs::msg::CmdAndPoseVel> message;
    

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CmdAndPose>());
    rclcpp::shutdown();
    return 0;
}