#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "first_cpp_pkg/publisher.hpp"
#include "first_cpp_pkg/subscriber.hpp"







int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    
    auto pub = std::make_shared<TurtlePublisher>();
    auto sub = std::make_shared<TurtlesimSubscriber>();

    rclcpp::executors::MultiThreadedExecutor executor;

    executor.add_node(sub);
    executor.add_node(pub);
    
    executor.spin();
    


    rclcpp::shutdown();
    return 0;
}