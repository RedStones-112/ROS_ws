// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_package_msgs:srv/Capture.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__SRV__DETAIL__CAPTURE__STRUCT_HPP_
#define FIRST_PACKAGE_MSGS__SRV__DETAIL__CAPTURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__first_package_msgs__srv__Capture_Request __attribute__((deprecated))
#else
# define DEPRECATED__first_package_msgs__srv__Capture_Request __declspec(deprecated)
#endif

namespace first_package_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Capture_Request_
{
  using Type = Capture_Request_<ContainerAllocator>;

  explicit Capture_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Capture_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    first_package_msgs::srv::Capture_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_package_msgs::srv::Capture_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Capture_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Capture_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_package_msgs__srv__Capture_Request
    std::shared_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_package_msgs__srv__Capture_Request
    std::shared_ptr<first_package_msgs::srv::Capture_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Capture_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Capture_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Capture_Request_

// alias to use template instance with default allocator
using Capture_Request =
  first_package_msgs::srv::Capture_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_package_msgs


#ifndef _WIN32
# define DEPRECATED__first_package_msgs__srv__Capture_Response __attribute__((deprecated))
#else
# define DEPRECATED__first_package_msgs__srv__Capture_Response __declspec(deprecated)
#endif

namespace first_package_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Capture_Response_
{
  using Type = Capture_Response_<ContainerAllocator>;

  explicit Capture_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save_path = "";
    }
  }

  explicit Capture_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : save_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save_path = "";
    }
  }

  // field types and members
  using _save_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _save_path_type save_path;

  // setters for named parameter idiom
  Type & set__save_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->save_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_package_msgs::srv::Capture_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_package_msgs::srv::Capture_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Capture_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Capture_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_package_msgs__srv__Capture_Response
    std::shared_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_package_msgs__srv__Capture_Response
    std::shared_ptr<first_package_msgs::srv::Capture_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Capture_Response_ & other) const
  {
    if (this->save_path != other.save_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Capture_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Capture_Response_

// alias to use template instance with default allocator
using Capture_Response =
  first_package_msgs::srv::Capture_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_package_msgs

namespace first_package_msgs
{

namespace srv
{

struct Capture
{
  using Request = first_package_msgs::srv::Capture_Request;
  using Response = first_package_msgs::srv::Capture_Response;
};

}  // namespace srv

}  // namespace first_package_msgs

#endif  // FIRST_PACKAGE_MSGS__SRV__DETAIL__CAPTURE__STRUCT_HPP_
