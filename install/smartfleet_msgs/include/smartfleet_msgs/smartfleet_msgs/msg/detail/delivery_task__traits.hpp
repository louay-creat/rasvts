// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smartfleet_msgs:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__TRAITS_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smartfleet_msgs/msg/detail/delivery_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pickup'
// Member 'dropoff'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'release_time'
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace smartfleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeliveryTask & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pickup
  {
    out << "pickup: ";
    to_flow_style_yaml(msg.pickup, out);
    out << ", ";
  }

  // member: dropoff
  {
    out << "dropoff: ";
    to_flow_style_yaml(msg.dropoff, out);
    out << ", ";
  }

  // member: release_time
  {
    out << "release_time: ";
    to_flow_style_yaml(msg.release_time, out);
    out << ", ";
  }

  // member: deadline
  {
    out << "deadline: ";
    to_flow_style_yaml(msg.deadline, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliveryTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pickup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup:\n";
    to_block_style_yaml(msg.pickup, out, indentation + 2);
  }

  // member: dropoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff:\n";
    to_block_style_yaml(msg.dropoff, out, indentation + 2);
  }

  // member: release_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "release_time:\n";
    to_block_style_yaml(msg.release_time, out, indentation + 2);
  }

  // member: deadline
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadline:\n";
    to_block_style_yaml(msg.deadline, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliveryTask & msg, bool use_flow_style = false)
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
  const smartfleet_msgs::msg::DeliveryTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  smartfleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smartfleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const smartfleet_msgs::msg::DeliveryTask & msg)
{
  return smartfleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smartfleet_msgs::msg::DeliveryTask>()
{
  return "smartfleet_msgs::msg::DeliveryTask";
}

template<>
inline const char * name<smartfleet_msgs::msg::DeliveryTask>()
{
  return "smartfleet_msgs/msg/DeliveryTask";
}

template<>
struct has_fixed_size<smartfleet_msgs::msg::DeliveryTask>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<smartfleet_msgs::msg::DeliveryTask>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<smartfleet_msgs::msg::DeliveryTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__TRAITS_HPP_
