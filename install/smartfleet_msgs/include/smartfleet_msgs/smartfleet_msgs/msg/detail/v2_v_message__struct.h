// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__STRUCT_H_
#define SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'receivers_id'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'type'
// Member 'payload'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/V2VMessage in the package smartfleet_msgs.
typedef struct smartfleet_msgs__msg__V2VMessage
{
  int32_t sender_id;
  /// empty => broadcast to all within range
  rosidl_runtime_c__int32__Sequence receivers_id;
  builtin_interfaces__msg__Time stamp;
  /// "BID", "ASSIGN", "STATUS", etc.
  rosidl_runtime_c__String type;
  /// JSON or custom-encoded
  rosidl_runtime_c__String payload;
} smartfleet_msgs__msg__V2VMessage;

// Struct for a sequence of smartfleet_msgs__msg__V2VMessage.
typedef struct smartfleet_msgs__msg__V2VMessage__Sequence
{
  smartfleet_msgs__msg__V2VMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} smartfleet_msgs__msg__V2VMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__STRUCT_H_
