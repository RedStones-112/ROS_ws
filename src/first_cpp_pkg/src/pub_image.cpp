#include <chrono>
#include <memory>
#include <vector>
#include <cmath>
#include <unistd.h>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rcl_interfaces/msg/set_parameters_result.hpp"

// #include "subscriber.cpp"

#include "first_package_msgs/action/dist_turtle.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/srv/spawn.hpp"
#include "turtlesim/srv/teleport_absolute.hpp"


using std::placeholders::_1;
using std::placeholders::_2;
namespace DistTurtleServer_namespace
{
class DistTurtleServer : public rclcpp::Node
{
public:
    DistTurtleServer() : Node("action_server")
    {
        // server_ = rclcpp_action::create_server<first_package_msgs::action::DistTurtle>(
        //     this,
        //     "dist_turtle",
        //     std::bind(&DistTurtleServer::execute_callback, this, _1));

        // this->server_ = rclcpp_action::create_server<first_package_msgs::action::DistTurtle>(
        //     this,
        //     "dist_turtle",
        //     std::bind(&DistTurtleServer::execute_callback, this, std::placeholders::_1)
// );
        
    
        

    }
private:
    // rclcpp_action::Server<first_package_msgs::action::DistTurtle>::SharedPtr server_;
    void execute_callback(const rclcpp_action::ServerGoalHandle<first_package_msgs::action::DistTurtle> goal_handle)
    {
        
        
    }

    
    

};
}
int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistTurtleServer_namespace::DistTurtleServer>());
    rclcpp::shutdown();
    return 0;
}