// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_package_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_HPP_
#define FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__first_package_msgs__msg__CmdAndPoseVel __attribute__((deprecated))
#else
# define DEPRECATED__first_package_msgs__msg__CmdAndPoseVel __declspec(deprecated)
#endif

namespace first_package_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdAndPoseVel_
{
  using Type = CmdAndPoseVel_<ContainerAllocator>;

  explicit CmdAndPoseVel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_vel_linear = 0.0f;
      this->cmd_vel_angular = 0.0f;
      this->pose_x = 0.0f;
      this->pose_y = 0.0f;
      this->linear_vel = 0.0f;
      this->angular_vel = 0.0f;
    }
  }

  explicit CmdAndPoseVel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd_vel_linear = 0.0f;
      this->cmd_vel_angular = 0.0f;
      this->pose_x = 0.0f;
      this->pose_y = 0.0f;
      this->linear_vel = 0.0f;
      this->angular_vel = 0.0f;
    }
  }

  // field types and members
  using _cmd_vel_linear_type =
    float;
  _cmd_vel_linear_type cmd_vel_linear;
  using _cmd_vel_angular_type =
    float;
  _cmd_vel_angular_type cmd_vel_angular;
  using _pose_x_type =
    float;
  _pose_x_type pose_x;
  using _pose_y_type =
    float;
  _pose_y_type pose_y;
  using _linear_vel_type =
    float;
  _linear_vel_type linear_vel;
  using _angular_vel_type =
    float;
  _angular_vel_type angular_vel;

  // setters for named parameter idiom
  Type & set__cmd_vel_linear(
    const float & _arg)
  {
    this->cmd_vel_linear = _arg;
    return *this;
  }
  Type & set__cmd_vel_angular(
    const float & _arg)
  {
    this->cmd_vel_angular = _arg;
    return *this;
  }
  Type & set__pose_x(
    const float & _arg)
  {
    this->pose_x = _arg;
    return *this;
  }
  Type & set__pose_y(
    const float & _arg)
  {
    this->pose_y = _arg;
    return *this;
  }
  Type & set__linear_vel(
    const float & _arg)
  {
    this->linear_vel = _arg;
    return *this;
  }
  Type & set__angular_vel(
    const float & _arg)
  {
    this->angular_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_package_msgs__msg__CmdAndPoseVel
    std::shared_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_package_msgs__msg__CmdAndPoseVel
    std::shared_ptr<first_package_msgs::msg::CmdAndPoseVel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdAndPoseVel_ & other) const
  {
    if (this->cmd_vel_linear != other.cmd_vel_linear) {
      return false;
    }
    if (this->cmd_vel_angular != other.cmd_vel_angular) {
      return false;
    }
    if (this->pose_x != other.pose_x) {
      return false;
    }
    if (this->pose_y != other.pose_y) {
      return false;
    }
    if (this->linear_vel != other.linear_vel) {
      return false;
    }
    if (this->angular_vel != other.angular_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdAndPoseVel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdAndPoseVel_

// alias to use template instance with default allocator
using CmdAndPoseVel =
  first_package_msgs::msg::CmdAndPoseVel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace first_package_msgs

#endif  // FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__STRUCT_HPP_
