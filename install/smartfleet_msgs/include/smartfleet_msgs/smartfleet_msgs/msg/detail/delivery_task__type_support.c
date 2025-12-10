// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smartfleet_msgs:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smartfleet_msgs/msg/detail/delivery_task__rosidl_typesupport_introspection_c.h"
#include "smartfleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smartfleet_msgs/msg/detail/delivery_task__functions.h"
#include "smartfleet_msgs/msg/detail/delivery_task__struct.h"


// Include directives for member types
// Member `pickup`
// Member `dropoff`
#include "geometry_msgs/msg/pose.h"
// Member `pickup`
// Member `dropoff`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `release_time`
// Member `deadline`
#include "builtin_interfaces/msg/time.h"
// Member `release_time`
// Member `deadline`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smartfleet_msgs__msg__DeliveryTask__init(message_memory);
}

void smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_fini_function(void * message_memory)
{
  smartfleet_msgs__msg__DeliveryTask__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, pickup),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dropoff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, dropoff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "release_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, release_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deadline",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, deadline),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__DeliveryTask, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_members = {
  "smartfleet_msgs__msg",  // message namespace
  "DeliveryTask",  // message name
  7,  // number of fields
  sizeof(smartfleet_msgs__msg__DeliveryTask),
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_member_array,  // message members
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_init_function,  // function to initialize message memory (memory has to be allocated)
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_type_support_handle = {
  0,
  &smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smartfleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smartfleet_msgs, msg, DeliveryTask)() {
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_type_support_handle.typesupport_identifier) {
    smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smartfleet_msgs__msg__DeliveryTask__rosidl_typesupport_introspection_c__DeliveryTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
