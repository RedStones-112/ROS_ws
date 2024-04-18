// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_package_msgs:srv/Capture.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__SRV__DETAIL__CAPTURE__BUILDER_HPP_
#define FIRST_PACKAGE_MSGS__SRV__DETAIL__CAPTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_package_msgs/srv/detail/capture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_package_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::srv::Capture_Request>()
{
  return ::first_package_msgs::srv::Capture_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace srv
{

namespace builder
{

class Init_Capture_Response_save_path
{
public:
  Init_Capture_Response_save_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_package_msgs::srv::Capture_Response save_path(::first_package_msgs::srv::Capture_Response::_save_path_type arg)
  {
    msg_.save_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::srv::Capture_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::srv::Capture_Response>()
{
  return first_package_msgs::srv::builder::Init_Capture_Response_save_path();
}

}  // namespace first_package_msgs

#endif  // FIRST_PACKAGE_MSGS__SRV__DETAIL__CAPTURE__BUILDER_HPP_
