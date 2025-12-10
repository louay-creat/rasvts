// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__BUILDER_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smartfleet_msgs/msg/detail/v2_v_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smartfleet_msgs
{

namespace msg
{

namespace builder
{

class Init_V2VMessage_payload
{
public:
  explicit Init_V2VMessage_payload(::smartfleet_msgs::msg::V2VMessage & msg)
  : msg_(msg)
  {}
  ::smartfleet_msgs::msg::V2VMessage payload(::smartfleet_msgs::msg::V2VMessage::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smartfleet_msgs::msg::V2VMessage msg_;
};

class Init_V2VMessage_type
{
public:
  explicit Init_V2VMessage_type(::smartfleet_msgs::msg::V2VMessage & msg)
  : msg_(msg)
  {}
  Init_V2VMessage_payload type(::smartfleet_msgs::msg::V2VMessage::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_V2VMessage_payload(msg_);
  }

private:
  ::smartfleet_msgs::msg::V2VMessage msg_;
};

class Init_V2VMessage_stamp
{
public:
  explicit Init_V2VMessage_stamp(::smartfleet_msgs::msg::V2VMessage & msg)
  : msg_(msg)
  {}
  Init_V2VMessage_type stamp(::smartfleet_msgs::msg::V2VMessage::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_V2VMessage_type(msg_);
  }

private:
  ::smartfleet_msgs::msg::V2VMessage msg_;
};

class Init_V2VMessage_receivers_id
{
public:
  explicit Init_V2VMessage_receivers_id(::smartfleet_msgs::msg::V2VMessage & msg)
  : msg_(msg)
  {}
  Init_V2VMessage_stamp receivers_id(::smartfleet_msgs::msg::V2VMessage::_receivers_id_type arg)
  {
    msg_.receivers_id = std::move(arg);
    return Init_V2VMessage_stamp(msg_);
  }

private:
  ::smartfleet_msgs::msg::V2VMessage msg_;
};

class Init_V2VMessage_sender_id
{
public:
  Init_V2VMessage_sender_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_V2VMessage_receivers_id sender_id(::smartfleet_msgs::msg::V2VMessage::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return Init_V2VMessage_receivers_id(msg_);
  }

private:
  ::smartfleet_msgs::msg::V2VMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smartfleet_msgs::msg::V2VMessage>()
{
  return smartfleet_msgs::msg::builder::Init_V2VMessage_sender_id();
}

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__BUILDER_HPP_
