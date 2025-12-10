// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smartfleet_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_
#define SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/TaskStatus in the package smartfleet_msgs.
typedef struct smartfleet_msgs__msg__TaskStatus
{
  int32_t task_id;
  int32_t vehicle_id;
  /// "NEW", "ASSIGNED", "IN_PROGRESS", "DELIVERED", "CANCELLED", "FAILED"
  rosidl_runtime_c__String status;
  builtin_interfaces__msg__Time stamp;
} smartfleet_msgs__msg__TaskStatus;

// Struct for a sequence of smartfleet_msgs__msg__TaskStatus.
typedef struct smartfleet_msgs__msg__TaskStatus__Sequence
{
  smartfleet_msgs__msg__TaskStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smartfleet_msgs__msg__TaskStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__STRUCT_H_
