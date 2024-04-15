// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from first_package_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "first_package_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "first_package_msgs/msg/detail/cmd_and_pose_vel__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace first_package_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_package_msgs
cdr_serialize(
  const first_package_msgs::msg::CmdAndPoseVel & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_package_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  first_package_msgs::msg::CmdAndPoseVel & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_package_msgs
get_serialized_size(
  const first_package_msgs::msg::CmdAndPoseVel & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_package_msgs
max_serialized_size_CmdAndPoseVel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace first_package_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_first_package_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, first_package_msgs, msg, CmdAndPoseVel)();

#ifdef __cplusplus
}
#endif

#endif  // FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
