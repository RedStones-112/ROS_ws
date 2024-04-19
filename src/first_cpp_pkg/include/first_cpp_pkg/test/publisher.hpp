#ifndef FIRST_CPP_PKG_PUBLISHER_HPP_
#define FIRST_CPP_PKG_PUBLISHER_HPP_

#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"


class TurtlePublisher : public rclcpp::Node
{
public:
    TurtlePublisher();
    void timer_callback();

private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
};

#endif /* TURTLE_PUBLISHER_HPP_ */