// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_package_msgs:srv/Recode.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__STRUCT_HPP_
#define FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__first_package_msgs__srv__Recode_Request __attribute__((deprecated))
#else
# define DEPRECATED__first_package_msgs__srv__Recode_Request __declspec(deprecated)
#endif

namespace first_package_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Recode_Request_
{
  using Type = Recode_Request_<ContainerAllocator>;

  explicit Recode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit Recode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_package_msgs::srv::Recode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_package_msgs::srv::Recode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Recode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Recode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_package_msgs__srv__Recode_Request
    std::shared_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_package_msgs__srv__Recode_Request
    std::shared_ptr<first_package_msgs::srv::Recode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Recode_Request_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Recode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Recode_Request_

// alias to use template instance with default allocator
using Recode_Request =
  first_package_msgs::srv::Recode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_package_msgs


#ifndef _WIN32
# define DEPRECATED__first_package_msgs__srv__Recode_Response __attribute__((deprecated))
#else
# define DEPRECATED__first_package_msgs__srv__Recode_Response __declspec(deprecated)
#endif

namespace first_package_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Recode_Response_
{
  using Type = Recode_Response_<ContainerAllocator>;

  explicit Recode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->save_path = "";
    }
  }

  explicit Recode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    first_package_msgs::srv::Recode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_package_msgs::srv::Recode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Recode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_package_msgs::srv::Recode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_package_msgs__srv__Recode_Response
    std::shared_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_package_msgs__srv__Recode_Response
    std::shared_ptr<first_package_msgs::srv::Recode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Recode_Response_ & other) const
  {
    if (this->save_path != other.save_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const Recode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Recode_Response_

// alias to use template instance with default allocator
using Recode_Response =
  first_package_msgs::srv::Recode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_package_msgs

namespace first_package_msgs
{

namespace srv
{

struct Recode
{
  using Request = first_package_msgs::srv::Recode_Request;
  using Response = first_package_msgs::srv::Recode_Response;
};

}  // namespace srv

}  // namespace first_package_msgs

#endif  // FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__STRUCT_HPP_
