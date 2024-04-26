#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "turtlesim/msg/pose.hpp"


using std::placeholders::_1;

class TurtlesimSubscriber : public rclcpp::Node
{
  public:
    TurtlesimSubscriber()
    : Node("turtle_subscriber")
    {
      subscription_ = this->create_subscription<turtlesim::msg::Pose>(
      "/turtle1/pose", 10, std::bind(&TurtlesimSubscriber::callback, this, _1));
    }

  private:
    void callback(const turtlesim::msg::Pose & msg) const
    {
      // RCLCPP_INFO(this->get_logger(), "I heard: '%f' '%f' ", msg.x, msg.y);
    }
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
};

