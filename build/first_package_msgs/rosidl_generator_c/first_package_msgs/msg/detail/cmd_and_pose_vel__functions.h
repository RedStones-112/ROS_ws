// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from first_package_msgs:msg/CmdAndPoseVel.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__FUNCTIONS_H_
#define FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "first_package_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "first_package_msgs/msg/detail/cmd_and_pose_vel__struct.h"

/// Initialize msg/CmdAndPoseVel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__msg__CmdAndPoseVel
 * )) before or use
 * first_package_msgs__msg__CmdAndPoseVel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__msg__CmdAndPoseVel__init(first_package_msgs__msg__CmdAndPoseVel * msg);

/// Finalize msg/CmdAndPoseVel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__msg__CmdAndPoseVel__fini(first_package_msgs__msg__CmdAndPoseVel * msg);

/// Create msg/CmdAndPoseVel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__msg__CmdAndPoseVel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__msg__CmdAndPoseVel *
first_package_msgs__msg__CmdAndPoseVel__create();

/// Destroy msg/CmdAndPoseVel message.
/**
 * It calls
 * first_package_msgs__msg__CmdAndPoseVel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__msg__CmdAndPoseVel__destroy(first_package_msgs__msg__CmdAndPoseVel * msg);

/// Check for msg/CmdAndPoseVel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__msg__CmdAndPoseVel__are_equal(const first_package_msgs__msg__CmdAndPoseVel * lhs, const first_package_msgs__msg__CmdAndPoseVel * rhs);

/// Copy a msg/CmdAndPoseVel message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__msg__CmdAndPoseVel__copy(
  const first_package_msgs__msg__CmdAndPoseVel * input,
  first_package_msgs__msg__CmdAndPoseVel * output);

/// Initialize array of msg/CmdAndPoseVel messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__msg__CmdAndPoseVel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__msg__CmdAndPoseVel__Sequence__init(first_package_msgs__msg__CmdAndPoseVel__Sequence * array, size_t size);

/// Finalize array of msg/CmdAndPoseVel messages.
/**
 * It calls
 * first_package_msgs__msg__CmdAndPoseVel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__msg__CmdAndPoseVel__Sequence__fini(first_package_msgs__msg__CmdAndPoseVel__Sequence * array);

/// Create array of msg/CmdAndPoseVel messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__msg__CmdAndPoseVel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__msg__CmdAndPoseVel__Sequence *
first_package_msgs__msg__CmdAndPoseVel__Sequence__create(size_t size);

/// Destroy array of msg/CmdAndPoseVel messages.
/**
 * It calls
 * first_package_msgs__msg__CmdAndPoseVel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__msg__CmdAndPoseVel__Sequence__destroy(first_package_msgs__msg__CmdAndPoseVel__Sequence * array);

/// Check for msg/CmdAndPoseVel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__msg__CmdAndPoseVel__Sequence__are_equal(const first_package_msgs__msg__CmdAndPoseVel__Sequence * lhs, const first_package_msgs__msg__CmdAndPoseVel__Sequence * rhs);

/// Copy an array of msg/CmdAndPoseVel messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__msg__CmdAndPoseVel__Sequence__copy(
  const first_package_msgs__msg__CmdAndPoseVel__Sequence * input,
  first_package_msgs__msg__CmdAndPoseVel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FIRST_PACKAGE_MSGS__MSG__DETAIL__CMD_AND_POSE_VEL__FUNCTIONS_H_
