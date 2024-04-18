// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_package_msgs:srv/Recode.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__BUILDER_HPP_
#define FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_package_msgs/srv/detail/recode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_package_msgs
{

namespace srv
{

namespace builder
{

class Init_Recode_Request_status
{
public:
  Init_Recode_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_package_msgs::srv::Recode_Request status(::first_package_msgs::srv::Recode_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::srv::Recode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::srv::Recode_Request>()
{
  return first_package_msgs::srv::builder::Init_Recode_Request_status();
}

}  // namespace first_package_msgs


namespace first_package_msgs
{

namespace srv
{

namespace builder
{

class Init_Recode_Response_save_path
{
public:
  Init_Recode_Response_save_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_package_msgs::srv::Recode_Response save_path(::first_package_msgs::srv::Recode_Response::_save_path_type arg)
  {
    msg_.save_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_package_msgs::srv::Recode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_package_msgs::srv::Recode_Response>()
{
  return first_package_msgs::srv::builder::Init_Recode_Response_save_path();
}

}  // namespace first_package_msgs

#endif  // FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__BUILDER_HPP_
