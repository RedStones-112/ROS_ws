// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_package_msgs:srv/Recode.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__STRUCT_H_
#define FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Recode in the package first_package_msgs.
typedef struct first_package_msgs__srv__Recode_Request
{
  bool status;
} first_package_msgs__srv__Recode_Request;

// Struct for a sequence of first_package_msgs__srv__Recode_Request.
typedef struct first_package_msgs__srv__Recode_Request__Sequence
{
  first_package_msgs__srv__Recode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__srv__Recode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'save_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Recode in the package first_package_msgs.
typedef struct first_package_msgs__srv__Recode_Response
{
  rosidl_runtime_c__String__Sequence save_path;
} first_package_msgs__srv__Recode_Response;

// Struct for a sequence of first_package_msgs__srv__Recode_Response.
typedef struct first_package_msgs__srv__Recode_Response__Sequence
{
  first_package_msgs__srv__Recode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__srv__Recode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_PACKAGE_MSGS__SRV__DETAIL__RECODE__STRUCT_H_
