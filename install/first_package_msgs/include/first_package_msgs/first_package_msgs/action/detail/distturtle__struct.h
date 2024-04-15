// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_package_msgs:action/Distturtle.idl
// generated code does not contain a copyright notice

#ifndef FIRST_PACKAGE_MSGS__ACTION__DETAIL__DISTTURTLE__STRUCT_H_
#define FIRST_PACKAGE_MSGS__ACTION__DETAIL__DISTTURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_Goal
{
  float linear_x;
  float angular_z;
  float dist;
} first_package_msgs__action__Distturtle_Goal;

// Struct for a sequence of first_package_msgs__action__Distturtle_Goal.
typedef struct first_package_msgs__action__Distturtle_Goal__Sequence
{
  first_package_msgs__action__Distturtle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_Result
{
  float pos_x;
  float pos_y;
  float pos_theta;
  float result_dist;
} first_package_msgs__action__Distturtle_Result;

// Struct for a sequence of first_package_msgs__action__Distturtle_Result.
typedef struct first_package_msgs__action__Distturtle_Result__Sequence
{
  first_package_msgs__action__Distturtle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_Feedback
{
  float remained_dist;
} first_package_msgs__action__Distturtle_Feedback;

// Struct for a sequence of first_package_msgs__action__Distturtle_Feedback.
typedef struct first_package_msgs__action__Distturtle_Feedback__Sequence
{
  first_package_msgs__action__Distturtle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "first_package_msgs/action/detail/distturtle__struct.h"

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  first_package_msgs__action__Distturtle_Goal goal;
} first_package_msgs__action__Distturtle_SendGoal_Request;

// Struct for a sequence of first_package_msgs__action__Distturtle_SendGoal_Request.
typedef struct first_package_msgs__action__Distturtle_SendGoal_Request__Sequence
{
  first_package_msgs__action__Distturtle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} first_package_msgs__action__Distturtle_SendGoal_Response;

// Struct for a sequence of first_package_msgs__action__Distturtle_SendGoal_Response.
typedef struct first_package_msgs__action__Distturtle_SendGoal_Response__Sequence
{
  first_package_msgs__action__Distturtle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} first_package_msgs__action__Distturtle_GetResult_Request;

// Struct for a sequence of first_package_msgs__action__Distturtle_GetResult_Request.
typedef struct first_package_msgs__action__Distturtle_GetResult_Request__Sequence
{
  first_package_msgs__action__Distturtle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "first_package_msgs/action/detail/distturtle__struct.h"

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_GetResult_Response
{
  int8_t status;
  first_package_msgs__action__Distturtle_Result result;
} first_package_msgs__action__Distturtle_GetResult_Response;

// Struct for a sequence of first_package_msgs__action__Distturtle_GetResult_Response.
typedef struct first_package_msgs__action__Distturtle_GetResult_Response__Sequence
{
  first_package_msgs__action__Distturtle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "first_package_msgs/action/detail/distturtle__struct.h"

/// Struct defined in action/Distturtle in the package first_package_msgs.
typedef struct first_package_msgs__action__Distturtle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  first_package_msgs__action__Distturtle_Feedback feedback;
} first_package_msgs__action__Distturtle_FeedbackMessage;

// Struct for a sequence of first_package_msgs__action__Distturtle_FeedbackMessage.
typedef struct first_package_msgs__action__Distturtle_FeedbackMessage__Sequence
{
  first_package_msgs__action__Distturtle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_package_msgs__action__Distturtle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_PACKAGE_MSGS__ACTION__DETAIL__DISTTURTLE__STRUCT_H_
