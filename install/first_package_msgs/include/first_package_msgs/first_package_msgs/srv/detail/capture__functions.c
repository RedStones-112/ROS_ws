// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_package_msgs:srv/Capture.idl
// generated code does not contain a copyright notice
#include "first_package_msgs/srv/detail/capture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
first_package_msgs__srv__Capture_Request__init(first_package_msgs__srv__Capture_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
first_package_msgs__srv__Capture_Request__fini(first_package_msgs__srv__Capture_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
first_package_msgs__srv__Capture_Request__are_equal(const first_package_msgs__srv__Capture_Request * lhs, const first_package_msgs__srv__Capture_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
first_package_msgs__srv__Capture_Request__copy(
  const first_package_msgs__srv__Capture_Request * input,
  first_package_msgs__srv__Capture_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

first_package_msgs__srv__Capture_Request *
first_package_msgs__srv__Capture_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__srv__Capture_Request * msg = (first_package_msgs__srv__Capture_Request *)allocator.allocate(sizeof(first_package_msgs__srv__Capture_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__srv__Capture_Request));
  bool success = first_package_msgs__srv__Capture_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__srv__Capture_Request__destroy(first_package_msgs__srv__Capture_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__srv__Capture_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__srv__Capture_Request__Sequence__init(first_package_msgs__srv__Capture_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__srv__Capture_Request * data = NULL;

  if (size) {
    data = (first_package_msgs__srv__Capture_Request *)allocator.zero_allocate(size, sizeof(first_package_msgs__srv__Capture_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__srv__Capture_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__srv__Capture_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_package_msgs__srv__Capture_Request__Sequence__fini(first_package_msgs__srv__Capture_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_package_msgs__srv__Capture_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_package_msgs__srv__Capture_Request__Sequence *
first_package_msgs__srv__Capture_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__srv__Capture_Request__Sequence * array = (first_package_msgs__srv__Capture_Request__Sequence *)allocator.allocate(sizeof(first_package_msgs__srv__Capture_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__srv__Capture_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__srv__Capture_Request__Sequence__destroy(first_package_msgs__srv__Capture_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__srv__Capture_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__srv__Capture_Request__Sequence__are_equal(const first_package_msgs__srv__Capture_Request__Sequence * lhs, const first_package_msgs__srv__Capture_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__srv__Capture_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__srv__Capture_Request__Sequence__copy(
  const first_package_msgs__srv__Capture_Request__Sequence * input,
  first_package_msgs__srv__Capture_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__srv__Capture_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__srv__Capture_Request * data =
      (first_package_msgs__srv__Capture_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__srv__Capture_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__srv__Capture_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__srv__Capture_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `save_path`
#include "rosidl_runtime_c/string_functions.h"

bool
first_package_msgs__srv__Capture_Response__init(first_package_msgs__srv__Capture_Response * msg)
{
  if (!msg) {
    return false;
  }
  // save_path
  if (!rosidl_runtime_c__String__init(&msg->save_path)) {
    first_package_msgs__srv__Capture_Response__fini(msg);
    return false;
  }
  return true;
}

void
first_package_msgs__srv__Capture_Response__fini(first_package_msgs__srv__Capture_Response * msg)
{
  if (!msg) {
    return;
  }
  // save_path
  rosidl_runtime_c__String__fini(&msg->save_path);
}

bool
first_package_msgs__srv__Capture_Response__are_equal(const first_package_msgs__srv__Capture_Response * lhs, const first_package_msgs__srv__Capture_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // save_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->save_path), &(rhs->save_path)))
  {
    return false;
  }
  return true;
}

bool
first_package_msgs__srv__Capture_Response__copy(
  const first_package_msgs__srv__Capture_Response * input,
  first_package_msgs__srv__Capture_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // save_path
  if (!rosidl_runtime_c__String__copy(
      &(input->save_path), &(output->save_path)))
  {
    return false;
  }
  return true;
}

first_package_msgs__srv__Capture_Response *
first_package_msgs__srv__Capture_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__srv__Capture_Response * msg = (first_package_msgs__srv__Capture_Response *)allocator.allocate(sizeof(first_package_msgs__srv__Capture_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__srv__Capture_Response));
  bool success = first_package_msgs__srv__Capture_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__srv__Capture_Response__destroy(first_package_msgs__srv__Capture_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__srv__Capture_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__srv__Capture_Response__Sequence__init(first_package_msgs__srv__Capture_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__srv__Capture_Response * data = NULL;

  if (size) {
    data = (first_package_msgs__srv__Capture_Response *)allocator.zero_allocate(size, sizeof(first_package_msgs__srv__Capture_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__srv__Capture_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__srv__Capture_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_package_msgs__srv__Capture_Response__Sequence__fini(first_package_msgs__srv__Capture_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_package_msgs__srv__Capture_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_package_msgs__srv__Capture_Response__Sequence *
first_package_msgs__srv__Capture_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__srv__Capture_Response__Sequence * array = (first_package_msgs__srv__Capture_Response__Sequence *)allocator.allocate(sizeof(first_package_msgs__srv__Capture_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__srv__Capture_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__srv__Capture_Response__Sequence__destroy(first_package_msgs__srv__Capture_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__srv__Capture_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__srv__Capture_Response__Sequence__are_equal(const first_package_msgs__srv__Capture_Response__Sequence * lhs, const first_package_msgs__srv__Capture_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__srv__Capture_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__srv__Capture_Response__Sequence__copy(
  const first_package_msgs__srv__Capture_Response__Sequence * input,
  first_package_msgs__srv__Capture_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__srv__Capture_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__srv__Capture_Response * data =
      (first_package_msgs__srv__Capture_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__srv__Capture_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__srv__Capture_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__srv__Capture_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
