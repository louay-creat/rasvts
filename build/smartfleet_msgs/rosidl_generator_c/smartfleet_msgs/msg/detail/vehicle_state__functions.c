// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smartfleet_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "smartfleet_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
smartfleet_msgs__msg__VehicleState__init(smartfleet_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_id
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    smartfleet_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // battery_level
  // capacity_remaining
  // current_task_id
  // is_available
  return true;
}

void
smartfleet_msgs__msg__VehicleState__fini(smartfleet_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_id
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // battery_level
  // capacity_remaining
  // current_task_id
  // is_available
}

bool
smartfleet_msgs__msg__VehicleState__are_equal(const smartfleet_msgs__msg__VehicleState * lhs, const smartfleet_msgs__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_id
  if (lhs->vehicle_id != rhs->vehicle_id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  // capacity_remaining
  if (lhs->capacity_remaining != rhs->capacity_remaining) {
    return false;
  }
  // current_task_id
  if (lhs->current_task_id != rhs->current_task_id) {
    return false;
  }
  // is_available
  if (lhs->is_available != rhs->is_available) {
    return false;
  }
  return true;
}

bool
smartfleet_msgs__msg__VehicleState__copy(
  const smartfleet_msgs__msg__VehicleState * input,
  smartfleet_msgs__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_id
  output->vehicle_id = input->vehicle_id;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  // capacity_remaining
  output->capacity_remaining = input->capacity_remaining;
  // current_task_id
  output->current_task_id = input->current_task_id;
  // is_available
  output->is_available = input->is_available;
  return true;
}

smartfleet_msgs__msg__VehicleState *
smartfleet_msgs__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__VehicleState * msg = (smartfleet_msgs__msg__VehicleState *)allocator.allocate(sizeof(smartfleet_msgs__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smartfleet_msgs__msg__VehicleState));
  bool success = smartfleet_msgs__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smartfleet_msgs__msg__VehicleState__destroy(smartfleet_msgs__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smartfleet_msgs__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smartfleet_msgs__msg__VehicleState__Sequence__init(smartfleet_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__VehicleState * data = NULL;

  if (size) {
    data = (smartfleet_msgs__msg__VehicleState *)allocator.zero_allocate(size, sizeof(smartfleet_msgs__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smartfleet_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smartfleet_msgs__msg__VehicleState__fini(&data[i - 1]);
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
smartfleet_msgs__msg__VehicleState__Sequence__fini(smartfleet_msgs__msg__VehicleState__Sequence * array)
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
      smartfleet_msgs__msg__VehicleState__fini(&array->data[i]);
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

smartfleet_msgs__msg__VehicleState__Sequence *
smartfleet_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__VehicleState__Sequence * array = (smartfleet_msgs__msg__VehicleState__Sequence *)allocator.allocate(sizeof(smartfleet_msgs__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smartfleet_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smartfleet_msgs__msg__VehicleState__Sequence__destroy(smartfleet_msgs__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smartfleet_msgs__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smartfleet_msgs__msg__VehicleState__Sequence__are_equal(const smartfleet_msgs__msg__VehicleState__Sequence * lhs, const smartfleet_msgs__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smartfleet_msgs__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smartfleet_msgs__msg__VehicleState__Sequence__copy(
  const smartfleet_msgs__msg__VehicleState__Sequence * input,
  smartfleet_msgs__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smartfleet_msgs__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smartfleet_msgs__msg__VehicleState * data =
      (smartfleet_msgs__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smartfleet_msgs__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smartfleet_msgs__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smartfleet_msgs__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
