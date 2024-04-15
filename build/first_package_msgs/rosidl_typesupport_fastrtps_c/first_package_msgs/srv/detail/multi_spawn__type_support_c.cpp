// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from first_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice
#include "first_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "first_package_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "first_package_msgs/srv/detail/multi_spawn__struct.h"
#include "first_package_msgs/srv/detail/multi_spawn__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MultiSpawn_Request__ros_msg_type = first_package_msgs__srv__MultiSpawn_Request;

static bool _MultiSpawn_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiSpawn_Request__ros_msg_type * ros_message = static_cast<const _MultiSpawn_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num
  {
    cdr << ros_message->num;
  }

  return true;
}

static bool _MultiSpawn_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiSpawn_Request__ros_msg_type * ros_message = static_cast<_MultiSpawn_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: num
  {
    cdr >> ros_message->num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_package_msgs
size_t get_serialized_size_first_package_msgs__srv__MultiSpawn_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiSpawn_Request__ros_msg_type * ros_message = static_cast<const _MultiSpawn_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name num
  {
    size_t item_size = sizeof(ros_message->num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiSpawn_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_first_package_msgs__srv__MultiSpawn_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_package_msgs
size_t max_serialized_size_first_package_msgs__srv__MultiSpawn_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = first_package_msgs__srv__MultiSpawn_Request;
    is_plain =
      (
      offsetof(DataType, num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MultiSpawn_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_first_package_msgs__srv__MultiSpawn_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiSpawn_Request = {
  "first_package_msgs::srv",
  "MultiSpawn_Request",
  _MultiSpawn_Request__cdr_serialize,
  _MultiSpawn_Request__cdr_deserialize,
  _MultiSpawn_Request__get_serialized_size,
  _MultiSpawn_Request__max_serialized_size
};

static rosidl_message_type_support_t _MultiSpawn_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiSpawn_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_package_msgs, srv, MultiSpawn_Request)() {
  return &_MultiSpawn_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "first_package_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "first_package_msgs/srv/detail/multi_spawn__struct.h"
// already included above
// #include "first_package_msgs/srv/detail/multi_spawn__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // theta, x, y
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // theta, x, y

// forward declare type support functions


using _MultiSpawn_Response__ros_msg_type = first_package_msgs__srv__MultiSpawn_Response;

static bool _MultiSpawn_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiSpawn_Response__ros_msg_type * ros_message = static_cast<const _MultiSpawn_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    size_t size = ros_message->x.size;
    auto array_ptr = ros_message->x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y
  {
    size_t size = ros_message->y.size;
    auto array_ptr = ros_message->y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: theta
  {
    size_t size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MultiSpawn_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiSpawn_Response__ros_msg_type * ros_message = static_cast<_MultiSpawn_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x, size)) {
      fprintf(stderr, "failed to create array for field 'x'");
      return false;
    }
    auto array_ptr = ros_message->x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->y, size)) {
      fprintf(stderr, "failed to create array for field 'y'");
      return false;
    }
    auto array_ptr = ros_message->y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: theta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->theta.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->theta);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->theta, size)) {
      fprintf(stderr, "failed to create array for field 'theta'");
      return false;
    }
    auto array_ptr = ros_message->theta.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_package_msgs
size_t get_serialized_size_first_package_msgs__srv__MultiSpawn_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiSpawn_Response__ros_msg_type * ros_message = static_cast<const _MultiSpawn_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t array_size = ros_message->x.size;
    auto array_ptr = ros_message->x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t array_size = ros_message->y.size;
    auto array_ptr = ros_message->y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta
  {
    size_t array_size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiSpawn_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_first_package_msgs__srv__MultiSpawn_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_first_package_msgs
size_t max_serialized_size_first_package_msgs__srv__MultiSpawn_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = first_package_msgs__srv__MultiSpawn_Response;
    is_plain =
      (
      offsetof(DataType, theta) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MultiSpawn_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_first_package_msgs__srv__MultiSpawn_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MultiSpawn_Response = {
  "first_package_msgs::srv",
  "MultiSpawn_Response",
  _MultiSpawn_Response__cdr_serialize,
  _MultiSpawn_Response__cdr_deserialize,
  _MultiSpawn_Response__get_serialized_size,
  _MultiSpawn_Response__max_serialized_size
};

static rosidl_message_type_support_t _MultiSpawn_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiSpawn_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_package_msgs, srv, MultiSpawn_Response)() {
  return &_MultiSpawn_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "first_package_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "first_package_msgs/srv/multi_spawn.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MultiSpawn__callbacks = {
  "first_package_msgs::srv",
  "MultiSpawn",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_package_msgs, srv, MultiSpawn_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_package_msgs, srv, MultiSpawn_Response)(),
};

static rosidl_service_type_support_t MultiSpawn__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MultiSpawn__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_package_msgs, srv, MultiSpawn)() {
  return &MultiSpawn__handle;
}

#if defined(__cplusplus)
}
#endif
