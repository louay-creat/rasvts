// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__TRAITS_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "smartfleet_msgs/msg/detail/v2_v_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace smartfleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const V2VMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: sender_id
  {
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << ", ";
  }

  // member: receivers_id
  {
    if (msg.receivers_id.size() == 0) {
      out << "receivers_id: []";
    } else {
      out << "receivers_id: [";
      size_t pending_items = msg.receivers_id.size();
      for (auto item : msg.receivers_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: payload
  {
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const V2VMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sender_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sender_id, out);
    out << "\n";
  }

  // member: receivers_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.receivers_id.size() == 0) {
      out << "receivers_id: []\n";
    } else {
      out << "receivers_id:\n";
      for (auto item : msg.receivers_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const V2VMessage & msg, bool use_flow_style = false)
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
  const smartfleet_msgs::msg::V2VMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  smartfleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use smartfleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const smartfleet_msgs::msg::V2VMessage & msg)
{
  return smartfleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<smartfleet_msgs::msg::V2VMessage>()
{
  return "smartfleet_msgs::msg::V2VMessage";
}

template<>
inline const char * name<smartfleet_msgs::msg::V2VMessage>()
{
  return "smartfleet_msgs/msg/V2VMessage";
}

template<>
struct has_fixed_size<smartfleet_msgs::msg::V2VMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<smartfleet_msgs::msg::V2VMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<smartfleet_msgs::msg::V2VMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__TRAITS_HPP_
