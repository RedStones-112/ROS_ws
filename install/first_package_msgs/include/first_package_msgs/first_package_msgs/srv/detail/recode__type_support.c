// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from first_package_msgs:srv/Recode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "first_package_msgs/srv/detail/recode__rosidl_typesupport_introspection_c.h"
#include "first_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "first_package_msgs/srv/detail/recode__functions.h"
#include "first_package_msgs/srv/detail/recode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_package_msgs__srv__Recode_Request__init(message_memory);
}

void first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_fini_function(void * message_memory)
{
  first_package_msgs__srv__Recode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_package_msgs__srv__Recode_Request, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_members = {
  "first_package_msgs__srv",  // message namespace
  "Recode_Request",  // message name
  1,  // number of fields
  sizeof(first_package_msgs__srv__Recode_Request),
  first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_member_array,  // message members
  first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_type_support_handle = {
  0,
  &first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode_Request)() {
  if (!first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_type_support_handle.typesupport_identifier) {
    first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &first_package_msgs__srv__Recode_Request__rosidl_typesupport_introspection_c__Recode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "first_package_msgs/srv/detail/recode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "first_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "first_package_msgs/srv/detail/recode__functions.h"
// already included above
// #include "first_package_msgs/srv/detail/recode__struct.h"


// Include directives for member types
// Member `save_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  first_package_msgs__srv__Recode_Response__init(message_memory);
}

void first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_fini_function(void * message_memory)
{
  first_package_msgs__srv__Recode_Response__fini(message_memory);
}

size_t first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__size_function__Recode_Response__save_path(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__get_const_function__Recode_Response__save_path(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__get_function__Recode_Response__save_path(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__fetch_function__Recode_Response__save_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__get_const_function__Recode_Response__save_path(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__assign_function__Recode_Response__save_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__get_function__Recode_Response__save_path(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__resize_function__Recode_Response__save_path(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_member_array[1] = {
  {
    "save_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(first_package_msgs__srv__Recode_Response, save_path),  // bytes offset in struct
    NULL,  // default value
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__size_function__Recode_Response__save_path,  // size() function pointer
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__get_const_function__Recode_Response__save_path,  // get_const(index) function pointer
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__get_function__Recode_Response__save_path,  // get(index) function pointer
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__fetch_function__Recode_Response__save_path,  // fetch(index, &value) function pointer
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__assign_function__Recode_Response__save_path,  // assign(index, value) function pointer
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__resize_function__Recode_Response__save_path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_members = {
  "first_package_msgs__srv",  // message namespace
  "Recode_Response",  // message name
  1,  // number of fields
  sizeof(first_package_msgs__srv__Recode_Response),
  first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_member_array,  // message members
  first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_type_support_handle = {
  0,
  &first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_package_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode_Response)() {
  if (!first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_type_support_handle.typesupport_identifier) {
    first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &first_package_msgs__srv__Recode_Response__rosidl_typesupport_introspection_c__Recode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "first_package_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "first_package_msgs/srv/detail/recode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_members = {
  "first_package_msgs__srv",  // service namespace
  "Recode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_Request_message_type_support_handle,
  NULL  // response message
  // first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_Response_message_type_support_handle
};

static rosidl_service_type_support_t first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_type_support_handle = {
  0,
  &first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_first_package_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode)() {
  if (!first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_type_support_handle.typesupport_identifier) {
    first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_package_msgs, srv, Recode_Response)()->data;
  }

  return &first_package_msgs__srv__detail__recode__rosidl_typesupport_introspection_c__Recode_service_type_support_handle;
}
