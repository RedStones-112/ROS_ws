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
            std::bind(&DistTurtleServer::handle_goal, this, _1, _2),
            std::bind(&DistTurtleServer::handle_cancel, this, _1),
            std::bind(&DistTurtleServer::execute_callback, this, _1));

        is_first_time = true;

        quantile_time = this->get_parameter("quantile_time").as_double();
        almost_dist = this->get_parameter("almost_goal_dist").as_double();
        total_dist = 0;

        add_on_set_parameters_callback(
            std::bind(&DistTurtleServer::parameter_callback, this, _1)
        );

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
    

    rcl_interfaces::msg::SetParametersResult parameter_callback(const std::vector<rclcpp::Parameter> &params) {
        rcl_interfaces::msg::SetParametersResult result;
        
        result.successful = true;
        for (const auto &param : params) 
        {
            if (param.get_name() == "quantile_time" && param.get_type() == rclcpp::ParameterType::PARAMETER_STRING) 
            {
                RCLCPP_INFO(this->get_logger(), "param changed!");
                quantile_time = param.as_double();
            } 
            
            else if (param.get_name() == "almost_goal_dist" && param.get_type() == rclcpp::ParameterType::PARAMETER_STRING) 
            {
                RCLCPP_INFO(this->get_logger(), "param changed!");
                almost_dist = param.as_double();
            } 
    
            else
            {
                
                result.successful = false;
                result.reason = "Unsupported parameter";
            }
        }

        
        return result;
    }

    float calc_diff_pose(){
        float diff_dist;
        if (is_first_time) {
            previous_pose.set__x(current_pose.x);
            previous_pose.set__y(current_pose.y);
            is_first_time = false;
            RCLCPP_INFO(this->get_logger(), "first_pose!");
        }
        diff_dist = sqrt(pow(current_pose.x - previous_pose.x, 2) + pow(current_pose.y - previous_pose.y, 2));
        RCLCPP_INFO(this->get_logger(), "%f : %f",current_pose.x , previous_pose.x);
        previous_pose = current_pose;

        return diff_dist;
    }
    
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID & uuid, 
        std::shared_ptr<const first_package_msgs::action::DistTurtle::Goal> goal)
    {
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleDistTurtle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    first_package_msgs::action::DistTurtle::Result execute_callback(const std::shared_ptr<GoalHandleDistTurtle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "action start");
        first_package_msgs::action::DistTurtle::Result result;
        const auto goal = goal_handle->get_goal();
        
        geometry_msgs::msg::Twist msg;
        msg.linear.set__x(goal->linear_x);
        msg.angular.set__z(goal->angular_z);
        auto feedback_msg = std::make_shared<first_package_msgs::action::DistTurtle::Feedback>();
        
        while (true)
        {
            msg.linear.set__x(goal->linear_x);
            msg.angular.set__z(goal->angular_z);
            total_dist = calc_diff_pose();
            
            feedback_msg->set__remained_dist(goal->dist - total_dist);
            goal_handle->publish_feedback(feedback_msg);
            publisher_->publish(msg);
            
            if (feedback_msg->remained_dist < 0.5){
                break;
            }
            sleep(1);

        }

        

        result.set__pos_x(current_pose.x);
        result.set__pos_y(current_pose.y);
        result.set__pos_theta(current_pose.theta);
        result.set__result_dist(total_dist);
        
        total_dist = 0;
        is_first_time = true;

        return result;
    }

    

};


class TurtleSub_Action : public TurtlesimSubscriber{
public:
    
    TurtleSub_Action(std::shared_ptr<DistTurtleServer> server_) : TurtlesimSubscriber(){
        
        ac_server = server_;
        subscription_ = subscription_ = this->create_subscription<turtlesim::msg::Pose>(
      "/turtle1/pose", 10, std::bind(&TurtleSub_Action::callback, this, _1));;
    }

    void callback(const turtlesim::msg::Pose & msg)
    {
        ac_server->current_pose.set__x(msg.x);
        ac_server->current_pose.set__y(msg.y);
        ac_server->current_pose.set__theta(msg.theta);
        
        // RCLCPP_INFO(this->get_logger(), "I heard: '%f' '%f' ", ac_server->current_pose.x, ac_server->current_pose.y);
    }
    
    std::shared_ptr<DistTurtleServer> ac_server;
private:
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