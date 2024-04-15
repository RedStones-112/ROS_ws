// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from first_package_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "first_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_introspection_c.h"
#include "first_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "first_package_msgs/srv/detail/multi_spawn__functions.h"
#include "first_package_msgs/srv/detail/multi_spawn__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_package_msgs__srv__MultiSpawn_Request__init(message_memory);
}

void first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_fini_function(void * message_memory)
{
  first_package_msgs__srv__MultiSpawn_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_member_array[1] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_package_msgs__srv__MultiSpawn_Request, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_members = {
  "first_package_msgs__srv",  // message namespace
  "MultiSpawn_Request",  // message name
  1,  // number of fields
  sizeof(first_package_msgs__srv__MultiSpawn_Request),
  first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_member_array,  // message members
  first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle = {
  0,
  &first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn_Request)() {
  if (!first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle.typesupport_identifier) {
    first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &first_package_msgs__srv__MultiSpawn_Request__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "first_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_introspection_c.h"
// already included above
// #include "first_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "first_package_msgs/srv/detail/multi_spawn__functions.h"
// already included above
// #include "first_package_msgs/srv/detail/multi_spawn__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `theta`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_package_msgs__srv__MultiSpawn_Response__init(message_memory);
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_fini_function(void * message_memory)
{
  first_package_msgs__srv__MultiSpawn_Response__fini(message_memory);
}

size_t first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__size_function__MultiSpawn_Response__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__fetch_function__MultiSpawn_Response__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__assign_function__MultiSpawn_Response__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__resize_function__MultiSpawn_Response__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__size_function__MultiSpawn_Response__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__fetch_function__MultiSpawn_Response__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__assign_function__MultiSpawn_Response__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__resize_function__MultiSpawn_Response__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__size_function__MultiSpawn_Response__theta(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__theta(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__theta(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__fetch_function__MultiSpawn_Response__theta(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__theta(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__assign_function__MultiSpawn_Response__theta(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__theta(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__resize_function__MultiSpawn_Response__theta(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_package_msgs__srv__MultiSpawn_Response, x),  // bytes offset in struct
    NULL,  // default value
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__size_function__MultiSpawn_Response__x,  // size() function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__x,  // get_const(index) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__x,  // get(index) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__fetch_function__MultiSpawn_Response__x,  // fetch(index, &value) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__assign_function__MultiSpawn_Response__x,  // assign(index, value) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__resize_function__MultiSpawn_Response__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_package_msgs__srv__MultiSpawn_Response, y),  // bytes offset in struct
    NULL,  // default value
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__size_function__MultiSpawn_Response__y,  // size() function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__y,  // get_const(index) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__y,  // get(index) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__fetch_function__MultiSpawn_Response__y,  // fetch(index, &value) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__assign_function__MultiSpawn_Response__y,  // assign(index, value) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__resize_function__MultiSpawn_Response__y  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_package_msgs__srv__MultiSpawn_Response, theta),  // bytes offset in struct
    NULL,  // default value
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__size_function__MultiSpawn_Response__theta,  // size() function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_const_function__MultiSpawn_Response__theta,  // get_const(index) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__get_function__MultiSpawn_Response__theta,  // get(index) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__fetch_function__MultiSpawn_Response__theta,  // fetch(index, &value) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__assign_function__MultiSpawn_Response__theta,  // assign(index, value) function pointer
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__resize_function__MultiSpawn_Response__theta  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_members = {
  "first_package_msgs__srv",  // message namespace
  "MultiSpawn_Response",  // message name
  3,  // number of fields
  sizeof(first_package_msgs__srv__MultiSpawn_Response),
  first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_member_array,  // message members
  first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle = {
  0,
  &first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn_Response)() {
  if (!first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle.typesupport_identifier) {
    first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &first_package_msgs__srv__MultiSpawn_Response__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "first_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "first_package_msgs/srv/detail/multi_spawn__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_members = {
  "first_package_msgs__srv",  // service namespace
  "MultiSpawn",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_Request_message_type_support_handle,
  NULL  // response message
  // first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_Response_message_type_support_handle
};

static rosidl_service_type_support_t first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle = {
  0,
  &first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_package_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn)() {
  if (!first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle.typesupport_identifier) {
    first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, MultiSpawn_Response)()->data;
  }

  return &first_package_msgs__srv__detail__multi_spawn__rosidl_typesupport_introspection_c__MultiSpawn_service_type_support_handle;
}
