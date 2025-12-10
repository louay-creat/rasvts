// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__FUNCTIONS_H_
#define SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "smartfleet_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "smartfleet_msgs/msg/detail/v2_v_message__struct.h"

/// Initialize msg/V2VMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * smartfleet_msgs__msg__V2VMessage
 * )) before or use
 * smartfleet_msgs__msg__V2VMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
bool
smartfleet_msgs__msg__V2VMessage__init(smartfleet_msgs__msg__V2VMessage * msg);

/// Finalize msg/V2VMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
void
smartfleet_msgs__msg__V2VMessage__fini(smartfleet_msgs__msg__V2VMessage * msg);

/// Create msg/V2VMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * smartfleet_msgs__msg__V2VMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
smartfleet_msgs__msg__V2VMessage *
smartfleet_msgs__msg__V2VMessage__create();

/// Destroy msg/V2VMessage message.
/**
 * It calls
 * smartfleet_msgs__msg__V2VMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
void
smartfleet_msgs__msg__V2VMessage__destroy(smartfleet_msgs__msg__V2VMessage * msg);

/// Check for msg/V2VMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
bool
smartfleet_msgs__msg__V2VMessage__are_equal(const smartfleet_msgs__msg__V2VMessage * lhs, const smartfleet_msgs__msg__V2VMessage * rhs);

/// Copy a msg/V2VMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
bool
smartfleet_msgs__msg__V2VMessage__copy(
  const smartfleet_msgs__msg__V2VMessage * input,
  smartfleet_msgs__msg__V2VMessage * output);

/// Initialize array of msg/V2VMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * smartfleet_msgs__msg__V2VMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
bool
smartfleet_msgs__msg__V2VMessage__Sequence__init(smartfleet_msgs__msg__V2VMessage__Sequence * array, size_t size);

/// Finalize array of msg/V2VMessage messages.
/**
 * It calls
 * smartfleet_msgs__msg__V2VMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
void
smartfleet_msgs__msg__V2VMessage__Sequence__fini(smartfleet_msgs__msg__V2VMessage__Sequence * array);

/// Create array of msg/V2VMessage messages.
/**
 * It allocates the memory for the array and calls
 * smartfleet_msgs__msg__V2VMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
smartfleet_msgs__msg__V2VMessage__Sequence *
smartfleet_msgs__msg__V2VMessage__Sequence__create(size_t size);

/// Destroy array of msg/V2VMessage messages.
/**
 * It calls
 * smartfleet_msgs__msg__V2VMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
void
smartfleet_msgs__msg__V2VMessage__Sequence__destroy(smartfleet_msgs__msg__V2VMessage__Sequence * array);

/// Check for msg/V2VMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
bool
smartfleet_msgs__msg__V2VMessage__Sequence__are_equal(const smartfleet_msgs__msg__V2VMessage__Sequence * lhs, const smartfleet_msgs__msg__V2VMessage__Sequence * rhs);

/// Copy an array of msg/V2VMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_smartfleet_msgs
bool
smartfleet_msgs__msg__V2VMessage__Sequence__copy(
  const smartfleet_msgs__msg__V2VMessage__Sequence * input,
  smartfleet_msgs__msg__V2VMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__FUNCTIONS_H_
