// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smartfleet_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/VehicleState in the package smartfleet_msgs.
typedef struct smartfleet_msgs__msg__VehicleState
{
  int32_t vehicle_id;
  geometry_msgs__msg__Pose pose;
  float battery_level;
  float capacity_remaining;
  int32_t current_task_id;
  bool is_available;
} smartfleet_msgs__msg__VehicleState;

// Struct for a sequence of smartfleet_msgs__msg__VehicleState.
typedef struct smartfleet_msgs__msg__VehicleState__Sequence
{
  smartfleet_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smartfleet_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
