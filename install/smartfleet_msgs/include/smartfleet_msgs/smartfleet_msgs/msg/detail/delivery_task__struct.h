// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smartfleet_msgs:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__STRUCT_H_
#define SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pickup'
// Member 'dropoff'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'release_time'
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/DeliveryTask in the package smartfleet_msgs.
typedef struct smartfleet_msgs__msg__DeliveryTask
{
  int32_t id;
  geometry_msgs__msg__Pose pickup;
  geometry_msgs__msg__Pose dropoff;
  builtin_interfaces__msg__Time release_time;
  builtin_interfaces__msg__Time deadline;
  float size;
  float weight;
} smartfleet_msgs__msg__DeliveryTask;

// Struct for a sequence of smartfleet_msgs__msg__DeliveryTask.
typedef struct smartfleet_msgs__msg__DeliveryTask__Sequence
{
  smartfleet_msgs__msg__DeliveryTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smartfleet_msgs__msg__DeliveryTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__STRUCT_H_
