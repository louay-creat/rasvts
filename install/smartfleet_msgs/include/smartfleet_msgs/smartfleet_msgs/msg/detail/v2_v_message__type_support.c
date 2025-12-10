// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "smartfleet_msgs/msg/detail/v2_v_message__rosidl_typesupport_introspection_c.h"
#include "smartfleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "smartfleet_msgs/msg/detail/v2_v_message__functions.h"
#include "smartfleet_msgs/msg/detail/v2_v_message__struct.h"


// Include directives for member types
// Member `receivers_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `type`
// Member `payload`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  smartfleet_msgs__msg__V2VMessage__init(message_memory);
}

void smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_fini_function(void * message_memory)
{
  smartfleet_msgs__msg__V2VMessage__fini(message_memory);
}

size_t smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__size_function__V2VMessage__receivers_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__get_const_function__V2VMessage__receivers_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__get_function__V2VMessage__receivers_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__fetch_function__V2VMessage__receivers_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__get_const_function__V2VMessage__receivers_id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__assign_function__V2VMessage__receivers_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__get_function__V2VMessage__receivers_id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__resize_function__V2VMessage__receivers_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_member_array[5] = {
  {
    "sender_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__V2VMessage, sender_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receivers_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__V2VMessage, receivers_id),  // bytes offset in struct
    NULL,  // default value
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__size_function__V2VMessage__receivers_id,  // size() function pointer
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__get_const_function__V2VMessage__receivers_id,  // get_const(index) function pointer
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__get_function__V2VMessage__receivers_id,  // get(index) function pointer
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__fetch_function__V2VMessage__receivers_id,  // fetch(index, &value) function pointer
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__assign_function__V2VMessage__receivers_id,  // assign(index, value) function pointer
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__resize_function__V2VMessage__receivers_id  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__V2VMessage, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__V2VMessage, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(smartfleet_msgs__msg__V2VMessage, payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_members = {
  "smartfleet_msgs__msg",  // message namespace
  "V2VMessage",  // message name
  5,  // number of fields
  sizeof(smartfleet_msgs__msg__V2VMessage),
  smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_member_array,  // message members
  smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_type_support_handle = {
  0,
  &smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_smartfleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, smartfleet_msgs, msg, V2VMessage)() {
  smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_type_support_handle.typesupport_identifier) {
    smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &smartfleet_msgs__msg__V2VMessage__rosidl_typesupport_introspection_c__V2VMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
