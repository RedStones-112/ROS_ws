#include <chrono>
#include <memory>
#include <vector>
#include <cmath>
#include <unistd.h>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "first_cpp_pkg/subscriber.hpp"


#include "first_package_msgs/action/dist_turtle.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"



using std::placeholders::_1;
using std::placeholders::_2;

using GoalHandleDistTurtle = rclcpp_action::ServerGoalHandle<first_package_msgs::action::DistTurtle>;


class DistTurtleServer : public rclcpp::Node
{
public:
    turtlesim::msg::Pose current_pose;
    turtlesim::msg::Pose previous_pose;
    DistTurtleServer() : Node("action_server")
    {
        this->declare_parameter("quantile_time", 0.75);
        this->declare_parameter("almost_goal_dist", 0.5);
        
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            "/turtle1/cmd_vel", 10);

        action_server_ = rclcpp_action::create_server<first_package_msgs::action::DistTurtle>(
            this,
            "distturtle",
            nullptr,
            nullptr,
            std::bind(&DistTurtleServer::execute_callback, this, _1));

        is_first_time = true;

        quantile_time = this->get_parameter("quantile_time").as_double();
        almost_dist = this->get_parameter("almost_goal_dist").as_double();
        total_dist = 0;

        RCLCPP_INFO(this->get_logger(), "action server start");
    }
    
private:
    bool is_first_time;
    double almost_dist;
    double quantile_time;
    double total_dist;
    std::shared_ptr<first_package_msgs::action::DistTurtle_Result> result_msg;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp_action::Server<first_package_msgs::action::DistTurtle>::SharedPtr action_server_;
    
    
    float calc_diff_pose(){
        float diff_dist;
        if (is_first_time) {
            previous_pose.x = current_pose.x;
            previous_pose.y = current_pose.y;
            is_first_time = false;
        }
        diff_dist = sqrt(pow(current_pose.x - previous_pose.x, 2) + pow(current_pose.y - previous_pose.y, 2));
        previous_pose = current_pose;

        return diff_dist;
    }
    
    first_package_msgs::action::DistTurtle::Result execute_callback(const std::shared_ptr<GoalHandleDistTurtle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "action start");
        const auto goal = goal_handle->get_goal();
        first_package_msgs::action::DistTurtle::Result result;
        
        geometry_msgs::msg::Twist msg;
        msg.linear.x = goal->linear_x;
        msg.angular.z = goal->angular_z;
        auto feedback_msg = std::make_shared<first_package_msgs::action::DistTurtle::Feedback>();
        
        while (true)
        {
            msg.linear.x = goal->linear_x;
            msg.angular.z = goal->angular_z;
            total_dist = calc_diff_pose();

            feedback_msg->remained_dist = goal->dist - total_dist;
            goal_handle->publish_feedback(feedback_msg);
            publisher_->publish(msg);
            
            if (feedback_msg->remained_dist < 0.03){
                break;
            }
        }

        goal_handle->succeed(result_msg);

        result.pos_x = current_pose.x;
        result.pos_y = current_pose.y;
        result.pos_theta = current_pose.theta;
        result.result_dist = total_dist;
        
        total_dist = 0;
        is_first_time = true;

        return result;
    }

    

};

class TurtleSub_Action : public TurtlesimSubscriber{
public:
    
    TurtleSub_Action(std::shared_ptr<DistTurtleServer> server_) : TurtlesimSubscriber(){
        
        ac_server = server_;
    }

    void callback(auto msg){
        ac_server->current_pose = msg;

    }
private:
    std::shared_ptr<DistTurtleServer> ac_server;
};


int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::executors::MultiThreadedExecutor executor;
    auto ac = std::make_shared<DistTurtleServer>();
    auto sub = std::make_shared<TurtleSub_Action>(ac);

    
    executor.add_node(sub);
    executor.add_node(ac);
    
    executor.spin();

    rclcpp::shutdown();
    return 0;
}