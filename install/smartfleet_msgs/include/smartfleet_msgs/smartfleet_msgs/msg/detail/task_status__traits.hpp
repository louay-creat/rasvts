// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smartfleet_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smartfleet_msgs/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace smartfleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: vehicle_id
  {
    out << "vehicle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: vehicle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_id, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace smartfleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use smartfleet_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const smartfleet_msgs::msg::TaskStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  smartfleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smartfleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const smartfleet_msgs::msg::TaskStatus & msg)
{
  return smartfleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smartfleet_msgs::msg::TaskStatus>()
{
  return "smartfleet_msgs::msg::TaskStatus";
}

template<>
inline const char * name<smartfleet_msgs::msg::TaskStatus>()
{
  return "smartfleet_msgs/msg/TaskStatus";
}

template<>
struct has_fixed_size<smartfleet_msgs::msg::TaskStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smartfleet_msgs::msg::TaskStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smartfleet_msgs::msg::TaskStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__TRAITS_HPP_
