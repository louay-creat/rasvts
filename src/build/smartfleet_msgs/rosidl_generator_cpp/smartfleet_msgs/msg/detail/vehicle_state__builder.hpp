// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smartfleet_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smartfleet_msgs/msg/detail/vehicle_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smartfleet_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_is_available
{
public:
  explicit Init_VehicleState_is_available(::smartfleet_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::smartfleet_msgs::msg::VehicleState is_available(::smartfleet_msgs::msg::VehicleState::_is_available_type arg)
  {
    msg_.is_available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smartfleet_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_current_task_id
{
public:
  explicit Init_VehicleState_current_task_id(::smartfleet_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_is_available current_task_id(::smartfleet_msgs::msg::VehicleState::_current_task_id_type arg)
  {
    msg_.current_task_id = std::move(arg);
    return Init_VehicleState_is_available(msg_);
  }

private:
  ::smartfleet_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_capacity_remaining
{
public:
  explicit Init_VehicleState_capacity_remaining(::smartfleet_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_current_task_id capacity_remaining(::smartfleet_msgs::msg::VehicleState::_capacity_remaining_type arg)
  {
    msg_.capacity_remaining = std::move(arg);
    return Init_VehicleState_current_task_id(msg_);
  }

private:
  ::smartfleet_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_battery_level
{
public:
  explicit Init_VehicleState_battery_level(::smartfleet_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_capacity_remaining battery_level(::smartfleet_msgs::msg::VehicleState::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_VehicleState_capacity_remaining(msg_);
  }

private:
  ::smartfleet_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_pose
{
public:
  explicit Init_VehicleState_pose(::smartfleet_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_battery_level pose(::smartfleet_msgs::msg::VehicleState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_VehicleState_battery_level(msg_);
  }

private:
  ::smartfleet_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_vehicle_id
{
public:
  Init_VehicleState_vehicle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_pose vehicle_id(::smartfleet_msgs::msg::VehicleState::_vehicle_id_type arg)
  {
    msg_.vehicle_id = std::move(arg);
    return Init_VehicleState_pose(msg_);
  }

private:
  ::smartfleet_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smartfleet_msgs::msg::VehicleState>()
{
  return smartfleet_msgs::msg::builder::Init_VehicleState_vehicle_id();
}

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
