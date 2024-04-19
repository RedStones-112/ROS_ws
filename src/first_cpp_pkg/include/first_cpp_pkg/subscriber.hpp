#ifndef FIRST_CPP_PKG_SUBSCRIVER_HPP_
#define FIRST_CPP_PKG_SUBSCRIVER_HPP_

#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"


class TurtlesimSubscriber : public rclcpp::Node
{
public:
    TurtlesimSubscriber();

private:
    void topic_callback(const turtlesim::msg::Pose &msg) const;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
};



#endif /* TURTLE_PUBLISHER_HPP_ */