// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from first_package_msgs:action/Distturtle.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__ACTION__DETAIL__DISTTURTLE__FUNCTIONS_H_
#define FIRST_PACKAGE_MSGS__ACTION__DETAIL__DISTTURTLE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "first_package_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "first_package_msgs/action/detail/distturtle__struct.h"

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_Goal
 * )) before or use
 * first_package_msgs__action__Distturtle_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Goal__init(first_package_msgs__action__Distturtle_Goal * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Goal__fini(first_package_msgs__action__Distturtle_Goal * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_Goal *
first_package_msgs__action__Distturtle_Goal__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Goal__destroy(first_package_msgs__action__Distturtle_Goal * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Goal__are_equal(const first_package_msgs__action__Distturtle_Goal * lhs, const first_package_msgs__action__Distturtle_Goal * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_Goal__copy(
  const first_package_msgs__action__Distturtle_Goal * input,
  first_package_msgs__action__Distturtle_Goal * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Goal__Sequence__init(first_package_msgs__action__Distturtle_Goal__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Goal__Sequence__fini(first_package_msgs__action__Distturtle_Goal__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_Goal__Sequence *
first_package_msgs__action__Distturtle_Goal__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Goal__Sequence__destroy(first_package_msgs__action__Distturtle_Goal__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Goal__Sequence__are_equal(const first_package_msgs__action__Distturtle_Goal__Sequence * lhs, const first_package_msgs__action__Distturtle_Goal__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_Goal__Sequence__copy(
  const first_package_msgs__action__Distturtle_Goal__Sequence * input,
  first_package_msgs__action__Distturtle_Goal__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_Result
 * )) before or use
 * first_package_msgs__action__Distturtle_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Result__init(first_package_msgs__action__Distturtle_Result * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Result__fini(first_package_msgs__action__Distturtle_Result * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_Result *
first_package_msgs__action__Distturtle_Result__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Result__destroy(first_package_msgs__action__Distturtle_Result * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Result__are_equal(const first_package_msgs__action__Distturtle_Result * lhs, const first_package_msgs__action__Distturtle_Result * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_Result__copy(
  const first_package_msgs__action__Distturtle_Result * input,
  first_package_msgs__action__Distturtle_Result * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Result__Sequence__init(first_package_msgs__action__Distturtle_Result__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Result__Sequence__fini(first_package_msgs__action__Distturtle_Result__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_Result__Sequence *
first_package_msgs__action__Distturtle_Result__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Result__Sequence__destroy(first_package_msgs__action__Distturtle_Result__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Result__Sequence__are_equal(const first_package_msgs__action__Distturtle_Result__Sequence * lhs, const first_package_msgs__action__Distturtle_Result__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_Result__Sequence__copy(
  const first_package_msgs__action__Distturtle_Result__Sequence * input,
  first_package_msgs__action__Distturtle_Result__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_Feedback
 * )) before or use
 * first_package_msgs__action__Distturtle_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Feedback__init(first_package_msgs__action__Distturtle_Feedback * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Feedback__fini(first_package_msgs__action__Distturtle_Feedback * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_Feedback *
first_package_msgs__action__Distturtle_Feedback__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Feedback__destroy(first_package_msgs__action__Distturtle_Feedback * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Feedback__are_equal(const first_package_msgs__action__Distturtle_Feedback * lhs, const first_package_msgs__action__Distturtle_Feedback * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_Feedback__copy(
  const first_package_msgs__action__Distturtle_Feedback * input,
  first_package_msgs__action__Distturtle_Feedback * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Feedback__Sequence__init(first_package_msgs__action__Distturtle_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Feedback__Sequence__fini(first_package_msgs__action__Distturtle_Feedback__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_Feedback__Sequence *
first_package_msgs__action__Distturtle_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_Feedback__Sequence__destroy(first_package_msgs__action__Distturtle_Feedback__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_Feedback__Sequence__are_equal(const first_package_msgs__action__Distturtle_Feedback__Sequence * lhs, const first_package_msgs__action__Distturtle_Feedback__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_Feedback__Sequence__copy(
  const first_package_msgs__action__Distturtle_Feedback__Sequence * input,
  first_package_msgs__action__Distturtle_Feedback__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_SendGoal_Request
 * )) before or use
 * first_package_msgs__action__Distturtle_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Request__init(first_package_msgs__action__Distturtle_SendGoal_Request * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Request__fini(first_package_msgs__action__Distturtle_SendGoal_Request * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_SendGoal_Request *
first_package_msgs__action__Distturtle_SendGoal_Request__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Request__destroy(first_package_msgs__action__Distturtle_SendGoal_Request * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Request__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Request * lhs, const first_package_msgs__action__Distturtle_SendGoal_Request * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_SendGoal_Request__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Request * input,
  first_package_msgs__action__Distturtle_SendGoal_Request * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__init(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__fini(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence *
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__destroy(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * lhs, const first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * input,
  first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_SendGoal_Response
 * )) before or use
 * first_package_msgs__action__Distturtle_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Response__init(first_package_msgs__action__Distturtle_SendGoal_Response * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Response__fini(first_package_msgs__action__Distturtle_SendGoal_Response * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_SendGoal_Response *
first_package_msgs__action__Distturtle_SendGoal_Response__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Response__destroy(first_package_msgs__action__Distturtle_SendGoal_Response * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Response__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Response * lhs, const first_package_msgs__action__Distturtle_SendGoal_Response * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_SendGoal_Response__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Response * input,
  first_package_msgs__action__Distturtle_SendGoal_Response * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__init(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__fini(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence *
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__destroy(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * lhs, const first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * input,
  first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_GetResult_Request
 * )) before or use
 * first_package_msgs__action__Distturtle_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Request__init(first_package_msgs__action__Distturtle_GetResult_Request * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Request__fini(first_package_msgs__action__Distturtle_GetResult_Request * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_GetResult_Request *
first_package_msgs__action__Distturtle_GetResult_Request__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Request__destroy(first_package_msgs__action__Distturtle_GetResult_Request * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Request__are_equal(const first_package_msgs__action__Distturtle_GetResult_Request * lhs, const first_package_msgs__action__Distturtle_GetResult_Request * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_GetResult_Request__copy(
  const first_package_msgs__action__Distturtle_GetResult_Request * input,
  first_package_msgs__action__Distturtle_GetResult_Request * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__init(first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__fini(first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_GetResult_Request__Sequence *
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__destroy(first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__are_equal(const first_package_msgs__action__Distturtle_GetResult_Request__Sequence * lhs, const first_package_msgs__action__Distturtle_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__copy(
  const first_package_msgs__action__Distturtle_GetResult_Request__Sequence * input,
  first_package_msgs__action__Distturtle_GetResult_Request__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_GetResult_Response
 * )) before or use
 * first_package_msgs__action__Distturtle_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Response__init(first_package_msgs__action__Distturtle_GetResult_Response * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Response__fini(first_package_msgs__action__Distturtle_GetResult_Response * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_GetResult_Response *
first_package_msgs__action__Distturtle_GetResult_Response__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Response__destroy(first_package_msgs__action__Distturtle_GetResult_Response * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Response__are_equal(const first_package_msgs__action__Distturtle_GetResult_Response * lhs, const first_package_msgs__action__Distturtle_GetResult_Response * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_GetResult_Response__copy(
  const first_package_msgs__action__Distturtle_GetResult_Response * input,
  first_package_msgs__action__Distturtle_GetResult_Response * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__init(first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__fini(first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_GetResult_Response__Sequence *
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__destroy(first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__are_equal(const first_package_msgs__action__Distturtle_GetResult_Response__Sequence * lhs, const first_package_msgs__action__Distturtle_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__copy(
  const first_package_msgs__action__Distturtle_GetResult_Response__Sequence * input,
  first_package_msgs__action__Distturtle_GetResult_Response__Sequence * output);

/// Initialize action/Distturtle message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * first_package_msgs__action__Distturtle_FeedbackMessage
 * )) before or use
 * first_package_msgs__action__Distturtle_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_FeedbackMessage__init(first_package_msgs__action__Distturtle_FeedbackMessage * msg);

/// Finalize action/Distturtle message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_FeedbackMessage__fini(first_package_msgs__action__Distturtle_FeedbackMessage * msg);

/// Create action/Distturtle message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * first_package_msgs__action__Distturtle_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_FeedbackMessage *
first_package_msgs__action__Distturtle_FeedbackMessage__create();

/// Destroy action/Distturtle message.
/**
 * It calls
 * first_package_msgs__action__Distturtle_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_FeedbackMessage__destroy(first_package_msgs__action__Distturtle_FeedbackMessage * msg);

/// Check for action/Distturtle message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_FeedbackMessage__are_equal(const first_package_msgs__action__Distturtle_FeedbackMessage * lhs, const first_package_msgs__action__Distturtle_FeedbackMessage * rhs);

/// Copy a action/Distturtle message.
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
first_package_msgs__action__Distturtle_FeedbackMessage__copy(
  const first_package_msgs__action__Distturtle_FeedbackMessage * input,
  first_package_msgs__action__Distturtle_FeedbackMessage * output);

/// Initialize array of action/Distturtle messages.
/**
 * It allocates the memory for the number of elements and calls
 * first_package_msgs__action__Distturtle_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__init(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__fini(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array);

/// Create array of action/Distturtle messages.
/**
 * It allocates the memory for the array and calls
 * first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence *
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Distturtle messages.
/**
 * It calls
 * first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
void
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__destroy(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array);

/// Check for action/Distturtle message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_first_package_msgs
bool
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__are_equal(const first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * lhs, const first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Distturtle messages.
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
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__copy(
  const first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * input,
  first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FIRST_PACKAGE_MSGS__ACTION__DETAIL__DISTTURTLE__FUNCTIONS_H_
