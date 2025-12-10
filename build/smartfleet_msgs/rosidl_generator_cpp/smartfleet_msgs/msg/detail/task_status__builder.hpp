// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smartfleet_msgs:msg/TaskStatus.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smartfleet_msgs/msg/detail/task_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smartfleet_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskStatus_stamp
{
public:
  explicit Init_TaskStatus_stamp(::smartfleet_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  ::smartfleet_msgs::msg::TaskStatus stamp(::smartfleet_msgs::msg::TaskStatus::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smartfleet_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_status
{
public:
  explicit Init_TaskStatus_status(::smartfleet_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_stamp status(::smartfleet_msgs::msg::TaskStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskStatus_stamp(msg_);
  }

private:
  ::smartfleet_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_vehicle_id
{
public:
  explicit Init_TaskStatus_vehicle_id(::smartfleet_msgs::msg::TaskStatus & msg)
  : msg_(msg)
  {}
  Init_TaskStatus_status vehicle_id(::smartfleet_msgs::msg::TaskStatus::_vehicle_id_type arg)
  {
    msg_.vehicle_id = std::move(arg);
    return Init_TaskStatus_status(msg_);
  }

private:
  ::smartfleet_msgs::msg::TaskStatus msg_;
};

class Init_TaskStatus_task_id
{
public:
  Init_TaskStatus_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskStatus_vehicle_id task_id(::smartfleet_msgs::msg::TaskStatus::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskStatus_vehicle_id(msg_);
  }

private:
  ::smartfleet_msgs::msg::TaskStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smartfleet_msgs::msg::TaskStatus>()
{
  return smartfleet_msgs::msg::builder::Init_TaskStatus_task_id();
}

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__TASK_STATUS__BUILDER_HPP_
