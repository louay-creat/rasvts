// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice
#include "smartfleet_msgs/msg/detail/v2_v_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `receivers_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `type`
// Member `payload`
#include "rosidl_runtime_c/string_functions.h"

bool
smartfleet_msgs__msg__V2VMessage__init(smartfleet_msgs__msg__V2VMessage * msg)
{
  if (!msg) {
    return false;
  }
  // sender_id
  // receivers_id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->receivers_id, 0)) {
    smartfleet_msgs__msg__V2VMessage__fini(msg);
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    smartfleet_msgs__msg__V2VMessage__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    smartfleet_msgs__msg__V2VMessage__fini(msg);
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__init(&msg->payload)) {
    smartfleet_msgs__msg__V2VMessage__fini(msg);
    return false;
  }
  return true;
}

void
smartfleet_msgs__msg__V2VMessage__fini(smartfleet_msgs__msg__V2VMessage * msg)
{
  if (!msg) {
    return;
  }
  // sender_id
  // receivers_id
  rosidl_runtime_c__int32__Sequence__fini(&msg->receivers_id);
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // payload
  rosidl_runtime_c__String__fini(&msg->payload);
}

bool
smartfleet_msgs__msg__V2VMessage__are_equal(const smartfleet_msgs__msg__V2VMessage * lhs, const smartfleet_msgs__msg__V2VMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sender_id
  if (lhs->sender_id != rhs->sender_id) {
    return false;
  }
  // receivers_id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->receivers_id), &(rhs->receivers_id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
smartfleet_msgs__msg__V2VMessage__copy(
  const smartfleet_msgs__msg__V2VMessage * input,
  smartfleet_msgs__msg__V2VMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // sender_id
  output->sender_id = input->sender_id;
  // receivers_id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->receivers_id), &(output->receivers_id)))
  {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

smartfleet_msgs__msg__V2VMessage *
smartfleet_msgs__msg__V2VMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__V2VMessage * msg = (smartfleet_msgs__msg__V2VMessage *)allocator.allocate(sizeof(smartfleet_msgs__msg__V2VMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(smartfleet_msgs__msg__V2VMessage));
  bool success = smartfleet_msgs__msg__V2VMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
smartfleet_msgs__msg__V2VMessage__destroy(smartfleet_msgs__msg__V2VMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    smartfleet_msgs__msg__V2VMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
smartfleet_msgs__msg__V2VMessage__Sequence__init(smartfleet_msgs__msg__V2VMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__V2VMessage * data = NULL;

  if (size) {
    data = (smartfleet_msgs__msg__V2VMessage *)allocator.zero_allocate(size, sizeof(smartfleet_msgs__msg__V2VMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = smartfleet_msgs__msg__V2VMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        smartfleet_msgs__msg__V2VMessage__fini(&data[i - 1]);
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
smartfleet_msgs__msg__V2VMessage__Sequence__fini(smartfleet_msgs__msg__V2VMessage__Sequence * array)
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
      smartfleet_msgs__msg__V2VMessage__fini(&array->data[i]);
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

smartfleet_msgs__msg__V2VMessage__Sequence *
smartfleet_msgs__msg__V2VMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  smartfleet_msgs__msg__V2VMessage__Sequence * array = (smartfleet_msgs__msg__V2VMessage__Sequence *)allocator.allocate(sizeof(smartfleet_msgs__msg__V2VMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = smartfleet_msgs__msg__V2VMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
smartfleet_msgs__msg__V2VMessage__Sequence__destroy(smartfleet_msgs__msg__V2VMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    smartfleet_msgs__msg__V2VMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
smartfleet_msgs__msg__V2VMessage__Sequence__are_equal(const smartfleet_msgs__msg__V2VMessage__Sequence * lhs, const smartfleet_msgs__msg__V2VMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!smartfleet_msgs__msg__V2VMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
smartfleet_msgs__msg__V2VMessage__Sequence__copy(
  const smartfleet_msgs__msg__V2VMessage__Sequence * input,
  smartfleet_msgs__msg__V2VMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(smartfleet_msgs__msg__V2VMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    smartfleet_msgs__msg__V2VMessage * data =
      (smartfleet_msgs__msg__V2VMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!smartfleet_msgs__msg__V2VMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          smartfleet_msgs__msg__V2VMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!smartfleet_msgs__msg__V2VMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
