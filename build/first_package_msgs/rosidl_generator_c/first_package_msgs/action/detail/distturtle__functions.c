// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_package_msgs:action/Distturtle.idl
// generated code does not contain a copyright notice
#include "first_package_msgs/action/detail/distturtle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
first_package_msgs__action__Distturtle_Goal__init(first_package_msgs__action__Distturtle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // linear_x
  // angular_z
  // dist
  return true;
}

void
first_package_msgs__action__Distturtle_Goal__fini(first_package_msgs__action__Distturtle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // linear_x
  // angular_z
  // dist
}

bool
first_package_msgs__action__Distturtle_Goal__are_equal(const first_package_msgs__action__Distturtle_Goal * lhs, const first_package_msgs__action__Distturtle_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_x
  if (lhs->linear_x != rhs->linear_x) {
    return false;
  }
  // angular_z
  if (lhs->angular_z != rhs->angular_z) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_Goal__copy(
  const first_package_msgs__action__Distturtle_Goal * input,
  first_package_msgs__action__Distturtle_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_x
  output->linear_x = input->linear_x;
  // angular_z
  output->angular_z = input->angular_z;
  // dist
  output->dist = input->dist;
  return true;
}

first_package_msgs__action__Distturtle_Goal *
first_package_msgs__action__Distturtle_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Goal * msg = (first_package_msgs__action__Distturtle_Goal *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_Goal));
  bool success = first_package_msgs__action__Distturtle_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_Goal__destroy(first_package_msgs__action__Distturtle_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_Goal__Sequence__init(first_package_msgs__action__Distturtle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Goal * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_Goal *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_Goal__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_Goal__Sequence__fini(first_package_msgs__action__Distturtle_Goal__Sequence * array)
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
      first_package_msgs__action__Distturtle_Goal__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_Goal__Sequence *
first_package_msgs__action__Distturtle_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Goal__Sequence * array = (first_package_msgs__action__Distturtle_Goal__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_Goal__Sequence__destroy(first_package_msgs__action__Distturtle_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_Goal__Sequence__are_equal(const first_package_msgs__action__Distturtle_Goal__Sequence * lhs, const first_package_msgs__action__Distturtle_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_Goal__Sequence__copy(
  const first_package_msgs__action__Distturtle_Goal__Sequence * input,
  first_package_msgs__action__Distturtle_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_Goal * data =
      (first_package_msgs__action__Distturtle_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
first_package_msgs__action__Distturtle_Result__init(first_package_msgs__action__Distturtle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pos_x
  // pos_y
  // pos_theta
  // result_dist
  return true;
}

void
first_package_msgs__action__Distturtle_Result__fini(first_package_msgs__action__Distturtle_Result * msg)
{
  if (!msg) {
    return;
  }
  // pos_x
  // pos_y
  // pos_theta
  // result_dist
}

bool
first_package_msgs__action__Distturtle_Result__are_equal(const first_package_msgs__action__Distturtle_Result * lhs, const first_package_msgs__action__Distturtle_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_x
  if (lhs->pos_x != rhs->pos_x) {
    return false;
  }
  // pos_y
  if (lhs->pos_y != rhs->pos_y) {
    return false;
  }
  // pos_theta
  if (lhs->pos_theta != rhs->pos_theta) {
    return false;
  }
  // result_dist
  if (lhs->result_dist != rhs->result_dist) {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_Result__copy(
  const first_package_msgs__action__Distturtle_Result * input,
  first_package_msgs__action__Distturtle_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_x
  output->pos_x = input->pos_x;
  // pos_y
  output->pos_y = input->pos_y;
  // pos_theta
  output->pos_theta = input->pos_theta;
  // result_dist
  output->result_dist = input->result_dist;
  return true;
}

first_package_msgs__action__Distturtle_Result *
first_package_msgs__action__Distturtle_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Result * msg = (first_package_msgs__action__Distturtle_Result *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_Result));
  bool success = first_package_msgs__action__Distturtle_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_Result__destroy(first_package_msgs__action__Distturtle_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_Result__Sequence__init(first_package_msgs__action__Distturtle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Result * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_Result *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_Result__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_Result__Sequence__fini(first_package_msgs__action__Distturtle_Result__Sequence * array)
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
      first_package_msgs__action__Distturtle_Result__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_Result__Sequence *
first_package_msgs__action__Distturtle_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Result__Sequence * array = (first_package_msgs__action__Distturtle_Result__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_Result__Sequence__destroy(first_package_msgs__action__Distturtle_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_Result__Sequence__are_equal(const first_package_msgs__action__Distturtle_Result__Sequence * lhs, const first_package_msgs__action__Distturtle_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_Result__Sequence__copy(
  const first_package_msgs__action__Distturtle_Result__Sequence * input,
  first_package_msgs__action__Distturtle_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_Result * data =
      (first_package_msgs__action__Distturtle_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
first_package_msgs__action__Distturtle_Feedback__init(first_package_msgs__action__Distturtle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remained_dist
  return true;
}

void
first_package_msgs__action__Distturtle_Feedback__fini(first_package_msgs__action__Distturtle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remained_dist
}

bool
first_package_msgs__action__Distturtle_Feedback__are_equal(const first_package_msgs__action__Distturtle_Feedback * lhs, const first_package_msgs__action__Distturtle_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remained_dist
  if (lhs->remained_dist != rhs->remained_dist) {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_Feedback__copy(
  const first_package_msgs__action__Distturtle_Feedback * input,
  first_package_msgs__action__Distturtle_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remained_dist
  output->remained_dist = input->remained_dist;
  return true;
}

first_package_msgs__action__Distturtle_Feedback *
first_package_msgs__action__Distturtle_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Feedback * msg = (first_package_msgs__action__Distturtle_Feedback *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_Feedback));
  bool success = first_package_msgs__action__Distturtle_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_Feedback__destroy(first_package_msgs__action__Distturtle_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_Feedback__Sequence__init(first_package_msgs__action__Distturtle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Feedback * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_Feedback *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_Feedback__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_Feedback__Sequence__fini(first_package_msgs__action__Distturtle_Feedback__Sequence * array)
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
      first_package_msgs__action__Distturtle_Feedback__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_Feedback__Sequence *
first_package_msgs__action__Distturtle_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_Feedback__Sequence * array = (first_package_msgs__action__Distturtle_Feedback__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_Feedback__Sequence__destroy(first_package_msgs__action__Distturtle_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_Feedback__Sequence__are_equal(const first_package_msgs__action__Distturtle_Feedback__Sequence * lhs, const first_package_msgs__action__Distturtle_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_Feedback__Sequence__copy(
  const first_package_msgs__action__Distturtle_Feedback__Sequence * input,
  first_package_msgs__action__Distturtle_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_Feedback * data =
      (first_package_msgs__action__Distturtle_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "first_package_msgs/action/detail/distturtle__functions.h"

bool
first_package_msgs__action__Distturtle_SendGoal_Request__init(first_package_msgs__action__Distturtle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    first_package_msgs__action__Distturtle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!first_package_msgs__action__Distturtle_Goal__init(&msg->goal)) {
    first_package_msgs__action__Distturtle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
first_package_msgs__action__Distturtle_SendGoal_Request__fini(first_package_msgs__action__Distturtle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  first_package_msgs__action__Distturtle_Goal__fini(&msg->goal);
}

bool
first_package_msgs__action__Distturtle_SendGoal_Request__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Request * lhs, const first_package_msgs__action__Distturtle_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!first_package_msgs__action__Distturtle_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_SendGoal_Request__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Request * input,
  first_package_msgs__action__Distturtle_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!first_package_msgs__action__Distturtle_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

first_package_msgs__action__Distturtle_SendGoal_Request *
first_package_msgs__action__Distturtle_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_SendGoal_Request * msg = (first_package_msgs__action__Distturtle_SendGoal_Request *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_SendGoal_Request));
  bool success = first_package_msgs__action__Distturtle_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_SendGoal_Request__destroy(first_package_msgs__action__Distturtle_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__init(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_SendGoal_Request * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_SendGoal_Request *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_SendGoal_Request__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__fini(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array)
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
      first_package_msgs__action__Distturtle_SendGoal_Request__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_SendGoal_Request__Sequence *
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array = (first_package_msgs__action__Distturtle_SendGoal_Request__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__destroy(first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * lhs, const first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_SendGoal_Request__Sequence__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * input,
  first_package_msgs__action__Distturtle_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_SendGoal_Request * data =
      (first_package_msgs__action__Distturtle_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
first_package_msgs__action__Distturtle_SendGoal_Response__init(first_package_msgs__action__Distturtle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    first_package_msgs__action__Distturtle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
first_package_msgs__action__Distturtle_SendGoal_Response__fini(first_package_msgs__action__Distturtle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
first_package_msgs__action__Distturtle_SendGoal_Response__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Response * lhs, const first_package_msgs__action__Distturtle_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_SendGoal_Response__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Response * input,
  first_package_msgs__action__Distturtle_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

first_package_msgs__action__Distturtle_SendGoal_Response *
first_package_msgs__action__Distturtle_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_SendGoal_Response * msg = (first_package_msgs__action__Distturtle_SendGoal_Response *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_SendGoal_Response));
  bool success = first_package_msgs__action__Distturtle_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_SendGoal_Response__destroy(first_package_msgs__action__Distturtle_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__init(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_SendGoal_Response * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_SendGoal_Response *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_SendGoal_Response__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__fini(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array)
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
      first_package_msgs__action__Distturtle_SendGoal_Response__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_SendGoal_Response__Sequence *
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array = (first_package_msgs__action__Distturtle_SendGoal_Response__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__destroy(first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__are_equal(const first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * lhs, const first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_SendGoal_Response__Sequence__copy(
  const first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * input,
  first_package_msgs__action__Distturtle_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_SendGoal_Response * data =
      (first_package_msgs__action__Distturtle_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
first_package_msgs__action__Distturtle_GetResult_Request__init(first_package_msgs__action__Distturtle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    first_package_msgs__action__Distturtle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
first_package_msgs__action__Distturtle_GetResult_Request__fini(first_package_msgs__action__Distturtle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
first_package_msgs__action__Distturtle_GetResult_Request__are_equal(const first_package_msgs__action__Distturtle_GetResult_Request * lhs, const first_package_msgs__action__Distturtle_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_GetResult_Request__copy(
  const first_package_msgs__action__Distturtle_GetResult_Request * input,
  first_package_msgs__action__Distturtle_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

first_package_msgs__action__Distturtle_GetResult_Request *
first_package_msgs__action__Distturtle_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_GetResult_Request * msg = (first_package_msgs__action__Distturtle_GetResult_Request *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_GetResult_Request));
  bool success = first_package_msgs__action__Distturtle_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_GetResult_Request__destroy(first_package_msgs__action__Distturtle_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__init(first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_GetResult_Request * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_GetResult_Request *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_GetResult_Request__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__fini(first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array)
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
      first_package_msgs__action__Distturtle_GetResult_Request__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_GetResult_Request__Sequence *
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array = (first_package_msgs__action__Distturtle_GetResult_Request__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__destroy(first_package_msgs__action__Distturtle_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__are_equal(const first_package_msgs__action__Distturtle_GetResult_Request__Sequence * lhs, const first_package_msgs__action__Distturtle_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_GetResult_Request__Sequence__copy(
  const first_package_msgs__action__Distturtle_GetResult_Request__Sequence * input,
  first_package_msgs__action__Distturtle_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_GetResult_Request * data =
      (first_package_msgs__action__Distturtle_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "first_package_msgs/action/detail/distturtle__functions.h"

bool
first_package_msgs__action__Distturtle_GetResult_Response__init(first_package_msgs__action__Distturtle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!first_package_msgs__action__Distturtle_Result__init(&msg->result)) {
    first_package_msgs__action__Distturtle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
first_package_msgs__action__Distturtle_GetResult_Response__fini(first_package_msgs__action__Distturtle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  first_package_msgs__action__Distturtle_Result__fini(&msg->result);
}

bool
first_package_msgs__action__Distturtle_GetResult_Response__are_equal(const first_package_msgs__action__Distturtle_GetResult_Response * lhs, const first_package_msgs__action__Distturtle_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!first_package_msgs__action__Distturtle_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_GetResult_Response__copy(
  const first_package_msgs__action__Distturtle_GetResult_Response * input,
  first_package_msgs__action__Distturtle_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!first_package_msgs__action__Distturtle_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

first_package_msgs__action__Distturtle_GetResult_Response *
first_package_msgs__action__Distturtle_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_GetResult_Response * msg = (first_package_msgs__action__Distturtle_GetResult_Response *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_GetResult_Response));
  bool success = first_package_msgs__action__Distturtle_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_GetResult_Response__destroy(first_package_msgs__action__Distturtle_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__init(first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_GetResult_Response * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_GetResult_Response *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_GetResult_Response__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__fini(first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array)
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
      first_package_msgs__action__Distturtle_GetResult_Response__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_GetResult_Response__Sequence *
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array = (first_package_msgs__action__Distturtle_GetResult_Response__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__destroy(first_package_msgs__action__Distturtle_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__are_equal(const first_package_msgs__action__Distturtle_GetResult_Response__Sequence * lhs, const first_package_msgs__action__Distturtle_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_GetResult_Response__Sequence__copy(
  const first_package_msgs__action__Distturtle_GetResult_Response__Sequence * input,
  first_package_msgs__action__Distturtle_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_GetResult_Response * data =
      (first_package_msgs__action__Distturtle_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "first_package_msgs/action/detail/distturtle__functions.h"

bool
first_package_msgs__action__Distturtle_FeedbackMessage__init(first_package_msgs__action__Distturtle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    first_package_msgs__action__Distturtle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!first_package_msgs__action__Distturtle_Feedback__init(&msg->feedback)) {
    first_package_msgs__action__Distturtle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
first_package_msgs__action__Distturtle_FeedbackMessage__fini(first_package_msgs__action__Distturtle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  first_package_msgs__action__Distturtle_Feedback__fini(&msg->feedback);
}

bool
first_package_msgs__action__Distturtle_FeedbackMessage__are_equal(const first_package_msgs__action__Distturtle_FeedbackMessage * lhs, const first_package_msgs__action__Distturtle_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!first_package_msgs__action__Distturtle_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_FeedbackMessage__copy(
  const first_package_msgs__action__Distturtle_FeedbackMessage * input,
  first_package_msgs__action__Distturtle_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!first_package_msgs__action__Distturtle_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

first_package_msgs__action__Distturtle_FeedbackMessage *
first_package_msgs__action__Distturtle_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_FeedbackMessage * msg = (first_package_msgs__action__Distturtle_FeedbackMessage *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_package_msgs__action__Distturtle_FeedbackMessage));
  bool success = first_package_msgs__action__Distturtle_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_package_msgs__action__Distturtle_FeedbackMessage__destroy(first_package_msgs__action__Distturtle_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_package_msgs__action__Distturtle_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__init(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_FeedbackMessage * data = NULL;

  if (size) {
    data = (first_package_msgs__action__Distturtle_FeedbackMessage *)allocator.zero_allocate(size, sizeof(first_package_msgs__action__Distturtle_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_package_msgs__action__Distturtle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_package_msgs__action__Distturtle_FeedbackMessage__fini(&data[i - 1]);
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
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__fini(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array)
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
      first_package_msgs__action__Distturtle_FeedbackMessage__fini(&array->data[i]);
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

first_package_msgs__action__Distturtle_FeedbackMessage__Sequence *
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array = (first_package_msgs__action__Distturtle_FeedbackMessage__Sequence *)allocator.allocate(sizeof(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__destroy(first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__are_equal(const first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * lhs, const first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_package_msgs__action__Distturtle_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_package_msgs__action__Distturtle_FeedbackMessage__Sequence__copy(
  const first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * input,
  first_package_msgs__action__Distturtle_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_package_msgs__action__Distturtle_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_package_msgs__action__Distturtle_FeedbackMessage * data =
      (first_package_msgs__action__Distturtle_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_package_msgs__action__Distturtle_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_package_msgs__action__Distturtle_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_package_msgs__action__Distturtle_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
