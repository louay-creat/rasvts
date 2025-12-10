// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smartfleet_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice
#include "smartfleet_msgs/msg/detail/task_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
smartfleet_msgs__msg__TaskStatus__init(smartfleet_msgs__msg__TaskStatus * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  // vehicle_id
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    smartfleet_msgs__msg__TaskStatus__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    smartfleet_msgs__msg__TaskStatus__fini(msg);
    return false;
  }
  return true;
}

void
smartfleet_msgs__msg__TaskStatus__fini(smartfleet_msgs__msg__TaskStatus * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  // vehicle_id
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
smartfleet_msgs__msg__TaskStatus__are_equal(const smartfleet_msgs__msg__TaskStatus * lhs, const smartfleet_msgs__msg__TaskStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (lhs->task_id != rhs->task_id) {
    return false;
  }
  // vehicle_id
  if (lhs->vehicle_id != rhs->vehicle_id) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
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
smartfleet_msgs__msg__TaskStatus__copy(
  const smartfleet_msgs__msg__TaskStatus * input,
  smartfleet_msgs__msg__TaskStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  output->task_id = input->task_id;
  // vehicle_id
  output->vehicle_id = input->vehicle_id;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

smartfleet_msgs__msg__TaskStatus *
smartfleet_msgs__msg__TaskStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__TaskStatus * msg = (smartfleet_msgs__msg__TaskStatus *)allocator.allocate(sizeof(smartfleet_msgs__msg__TaskStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smartfleet_msgs__msg__TaskStatus));
  bool success = smartfleet_msgs__msg__TaskStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smartfleet_msgs__msg__TaskStatus__destroy(smartfleet_msgs__msg__TaskStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smartfleet_msgs__msg__TaskStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smartfleet_msgs__msg__TaskStatus__Sequence__init(smartfleet_msgs__msg__TaskStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__TaskStatus * data = NULL;

  if (size) {
    data = (smartfleet_msgs__msg__TaskStatus *)allocator.zero_allocate(size, sizeof(smartfleet_msgs__msg__TaskStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smartfleet_msgs__msg__TaskStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smartfleet_msgs__msg__TaskStatus__fini(&data[i - 1]);
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
smartfleet_msgs__msg__TaskStatus__Sequence__fini(smartfleet_msgs__msg__TaskStatus__Sequence * array)
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
      smartfleet_msgs__msg__TaskStatus__fini(&array->data[i]);
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

smartfleet_msgs__msg__TaskStatus__Sequence *
smartfleet_msgs__msg__TaskStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__TaskStatus__Sequence * array = (smartfleet_msgs__msg__TaskStatus__Sequence *)allocator.allocate(sizeof(smartfleet_msgs__msg__TaskStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smartfleet_msgs__msg__TaskStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smartfleet_msgs__msg__TaskStatus__Sequence__destroy(smartfleet_msgs__msg__TaskStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smartfleet_msgs__msg__TaskStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smartfleet_msgs__msg__TaskStatus__Sequence__are_equal(const smartfleet_msgs__msg__TaskStatus__Sequence * lhs, const smartfleet_msgs__msg__TaskStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smartfleet_msgs__msg__TaskStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smartfleet_msgs__msg__TaskStatus__Sequence__copy(
  const smartfleet_msgs__msg__TaskStatus__Sequence * input,
  smartfleet_msgs__msg__TaskStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smartfleet_msgs__msg__TaskStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smartfleet_msgs__msg__TaskStatus * data =
      (smartfleet_msgs__msg__TaskStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smartfleet_msgs__msg__TaskStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smartfleet_msgs__msg__TaskStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smartfleet_msgs__msg__TaskStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
