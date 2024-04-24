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


class DistTurtleServer; // 전방선언을 해줘야 앞의 클래스가 뒷클래스를 받아올 수 있다.

class TurtleSub_Action : public TurtlesimSubscriber{
public:
    
    TurtleSub_Action(std::shared_ptr<DistTurtleServer> server_) : TurtlesimSubscriber(){
        ac_server = server_;
        
    }

    void callback(){
        // ac_server->current_pose;
    }
private:
    std::shared_ptr<DistTurtleServer> ac_server;
};


class DistTurtleServer : public rclcpp::Node
{
public:
    turtlesim::msg::Pose current_pose;
    DistTurtleServer() : Node("action_server")
    {
        this->declare_parameter("quantile_time", 0.75);
        this->declare_parameter("almost_goal_dist", 0.5);
        
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>(
            "/turtle1/cmd_vel", 10);

        action_server_ = rclcpp_action::create_server<first_package_msgs::action::DistTurtle>(
            this->get_node_base_interface(),
            this->get_node_clock_interface(),
            this->get_node_logging_interface(),
            this->get_node_waitables_interface(),
            "distturtle",
            std::bind(&DistTurtleServer::execute_callback, this, _1, _2),
            std::bind(&DistTurtleServer::execute_callback, this, _1),
            std::bind(&DistTurtleServer::execute_callback, this, _1)
            );

    }
    
private:
    bool is_first_time;
    turtlesim::msg::Pose previous_pose;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp_action::Server<first_package_msgs::action::DistTurtle>::SharedPtr action_server_;

    
    first_package_msgs::action::DistTurtle::Result execute_callback()
    {
        first_package_msgs::action::DistTurtle::Result result;


        return result;
    }

    

    

    
    

};

int main(int argc, char *argv[])
{
    auto ac = std::make_shared<DistTurtleServer>();
    auto sub = std::make_shared<TurtleSub_Action>(ac);
    rclcpp::executors::MultiThreadedExecutor executor;
    rclcpp::init(argc, argv);

    executor.add_node(sub);
    executor.add_node(ac);
    
    executor.spin();

    rclcpp::shutdown();
    return 0;
}