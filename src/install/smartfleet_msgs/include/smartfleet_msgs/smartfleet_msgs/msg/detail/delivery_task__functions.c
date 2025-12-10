// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smartfleet_msgs:msg/DeliveryTask.idl
// generated code does not contain a copyright notice
#include "smartfleet_msgs/msg/detail/delivery_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pickup`
// Member `dropoff`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `release_time`
// Member `deadline`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
smartfleet_msgs__msg__DeliveryTask__init(smartfleet_msgs__msg__DeliveryTask * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pickup
  if (!geometry_msgs__msg__Pose__init(&msg->pickup)) {
    smartfleet_msgs__msg__DeliveryTask__fini(msg);
    return false;
  }
  // dropoff
  if (!geometry_msgs__msg__Pose__init(&msg->dropoff)) {
    smartfleet_msgs__msg__DeliveryTask__fini(msg);
    return false;
  }
  // release_time
  if (!builtin_interfaces__msg__Time__init(&msg->release_time)) {
    smartfleet_msgs__msg__DeliveryTask__fini(msg);
    return false;
  }
  // deadline
  if (!builtin_interfaces__msg__Time__init(&msg->deadline)) {
    smartfleet_msgs__msg__DeliveryTask__fini(msg);
    return false;
  }
  // size
  // weight
  return true;
}

void
smartfleet_msgs__msg__DeliveryTask__fini(smartfleet_msgs__msg__DeliveryTask * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pickup
  geometry_msgs__msg__Pose__fini(&msg->pickup);
  // dropoff
  geometry_msgs__msg__Pose__fini(&msg->dropoff);
  // release_time
  builtin_interfaces__msg__Time__fini(&msg->release_time);
  // deadline
  builtin_interfaces__msg__Time__fini(&msg->deadline);
  // size
  // weight
}

bool
smartfleet_msgs__msg__DeliveryTask__are_equal(const smartfleet_msgs__msg__DeliveryTask * lhs, const smartfleet_msgs__msg__DeliveryTask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pickup
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pickup), &(rhs->pickup)))
  {
    return false;
  }
  // dropoff
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->dropoff), &(rhs->dropoff)))
  {
    return false;
  }
  // release_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->release_time), &(rhs->release_time)))
  {
    return false;
  }
  // deadline
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->deadline), &(rhs->deadline)))
  {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  return true;
}

bool
smartfleet_msgs__msg__DeliveryTask__copy(
  const smartfleet_msgs__msg__DeliveryTask * input,
  smartfleet_msgs__msg__DeliveryTask * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pickup
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pickup), &(output->pickup)))
  {
    return false;
  }
  // dropoff
  if (!geometry_msgs__msg__Pose__copy(
      &(input->dropoff), &(output->dropoff)))
  {
    return false;
  }
  // release_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->release_time), &(output->release_time)))
  {
    return false;
  }
  // deadline
  if (!builtin_interfaces__msg__Time__copy(
      &(input->deadline), &(output->deadline)))
  {
    return false;
  }
  // size
  output->size = input->size;
  // weight
  output->weight = input->weight;
  return true;
}

smartfleet_msgs__msg__DeliveryTask *
smartfleet_msgs__msg__DeliveryTask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__DeliveryTask * msg = (smartfleet_msgs__msg__DeliveryTask *)allocator.allocate(sizeof(smartfleet_msgs__msg__DeliveryTask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smartfleet_msgs__msg__DeliveryTask));
  bool success = smartfleet_msgs__msg__DeliveryTask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smartfleet_msgs__msg__DeliveryTask__destroy(smartfleet_msgs__msg__DeliveryTask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smartfleet_msgs__msg__DeliveryTask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smartfleet_msgs__msg__DeliveryTask__Sequence__init(smartfleet_msgs__msg__DeliveryTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__DeliveryTask * data = NULL;

  if (size) {
    data = (smartfleet_msgs__msg__DeliveryTask *)allocator.zero_allocate(size, sizeof(smartfleet_msgs__msg__DeliveryTask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smartfleet_msgs__msg__DeliveryTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smartfleet_msgs__msg__DeliveryTask__fini(&data[i - 1]);
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
smartfleet_msgs__msg__DeliveryTask__Sequence__fini(smartfleet_msgs__msg__DeliveryTask__Sequence * array)
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
      smartfleet_msgs__msg__DeliveryTask__fini(&array->data[i]);
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

smartfleet_msgs__msg__DeliveryTask__Sequence *
smartfleet_msgs__msg__DeliveryTask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__DeliveryTask__Sequence * array = (smartfleet_msgs__msg__DeliveryTask__Sequence *)allocator.allocate(sizeof(smartfleet_msgs__msg__DeliveryTask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smartfleet_msgs__msg__DeliveryTask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smartfleet_msgs__msg__DeliveryTask__Sequence__destroy(smartfleet_msgs__msg__DeliveryTask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smartfleet_msgs__msg__DeliveryTask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smartfleet_msgs__msg__DeliveryTask__Sequence__are_equal(const smartfleet_msgs__msg__DeliveryTask__Sequence * lhs, const smartfleet_msgs__msg__DeliveryTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smartfleet_msgs__msg__DeliveryTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smartfleet_msgs__msg__DeliveryTask__Sequence__copy(
  const smartfleet_msgs__msg__DeliveryTask__Sequence * input,
  smartfleet_msgs__msg__DeliveryTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smartfleet_msgs__msg__DeliveryTask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smartfleet_msgs__msg__DeliveryTask * data =
      (smartfleet_msgs__msg__DeliveryTask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smartfleet_msgs__msg__DeliveryTask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smartfleet_msgs__msg__DeliveryTask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smartfleet_msgs__msg__DeliveryTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
