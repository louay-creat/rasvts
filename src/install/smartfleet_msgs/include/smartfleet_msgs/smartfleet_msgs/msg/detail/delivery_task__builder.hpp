// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from smartfleet_msgs:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__BUILDER_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "smartfleet_msgs/msg/detail/delivery_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace smartfleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DeliveryTask_weight
{
public:
  explicit Init_DeliveryTask_weight(::smartfleet_msgs::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  ::smartfleet_msgs::msg::DeliveryTask weight(::smartfleet_msgs::msg::DeliveryTask::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_size
{
public:
  explicit Init_DeliveryTask_size(::smartfleet_msgs::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_weight size(::smartfleet_msgs::msg::DeliveryTask::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_DeliveryTask_weight(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_deadline
{
public:
  explicit Init_DeliveryTask_deadline(::smartfleet_msgs::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_size deadline(::smartfleet_msgs::msg::DeliveryTask::_deadline_type arg)
  {
    msg_.deadline = std::move(arg);
    return Init_DeliveryTask_size(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_release_time
{
public:
  explicit Init_DeliveryTask_release_time(::smartfleet_msgs::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_deadline release_time(::smartfleet_msgs::msg::DeliveryTask::_release_time_type arg)
  {
    msg_.release_time = std::move(arg);
    return Init_DeliveryTask_deadline(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_dropoff
{
public:
  explicit Init_DeliveryTask_dropoff(::smartfleet_msgs::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_release_time dropoff(::smartfleet_msgs::msg::DeliveryTask::_dropoff_type arg)
  {
    msg_.dropoff = std::move(arg);
    return Init_DeliveryTask_release_time(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_pickup
{
public:
  explicit Init_DeliveryTask_pickup(::smartfleet_msgs::msg::DeliveryTask & msg)
  : msg_(msg)
  {}
  Init_DeliveryTask_dropoff pickup(::smartfleet_msgs::msg::DeliveryTask::_pickup_type arg)
  {
    msg_.pickup = std::move(arg);
    return Init_DeliveryTask_dropoff(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

class Init_DeliveryTask_id
{
public:
  Init_DeliveryTask_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryTask_pickup id(::smartfleet_msgs::msg::DeliveryTask::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DeliveryTask_pickup(msg_);
  }

private:
  ::smartfleet_msgs::msg::DeliveryTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::smartfleet_msgs::msg::DeliveryTask>()
{
  return smartfleet_msgs::msg::builder::Init_DeliveryTask_id();
}

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__BUILDER_HPP_
