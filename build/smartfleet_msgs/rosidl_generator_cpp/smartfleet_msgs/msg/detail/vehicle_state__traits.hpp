// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smartfleet_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smartfleet_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace smartfleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehicle_id
  {
    out << "vehicle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << ", ";
  }

  // member: capacity_remaining
  {
    out << "capacity_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity_remaining, out);
    out << ", ";
  }

  // member: current_task_id
  {
    out << "current_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task_id, out);
    out << ", ";
  }

  // member: is_available
  {
    out << "is_available: ";
    rosidl_generator_traits::value_to_yaml(msg.is_available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }

  // member: capacity_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capacity_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.capacity_remaining, out);
    out << "\n";
  }

  // member: current_task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_task_id, out);
    out << "\n";
  }

  // member: is_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_available: ";
    rosidl_generator_traits::value_to_yaml(msg.is_available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleState & msg, bool use_flow_style = false)
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
  const smartfleet_msgs::msg::VehicleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  smartfleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smartfleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const smartfleet_msgs::msg::VehicleState & msg)
{
  return smartfleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smartfleet_msgs::msg::VehicleState>()
{
  return "smartfleet_msgs::msg::VehicleState";
}

template<>
inline const char * name<smartfleet_msgs::msg::VehicleState>()
{
  return "smartfleet_msgs/msg/VehicleState";
}

template<>
struct has_fixed_size<smartfleet_msgs::msg::VehicleState>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<smartfleet_msgs::msg::VehicleState>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<smartfleet_msgs::msg::VehicleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__TRAITS_HPP_
