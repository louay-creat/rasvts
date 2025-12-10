// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smartfleet_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__smartfleet_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__smartfleet_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace smartfleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_id = 0l;
      this->battery_level = 0.0f;
      this->capacity_remaining = 0.0f;
      this->current_task_id = 0l;
      this->is_available = false;
    }
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicle_id = 0l;
      this->battery_level = 0.0f;
      this->capacity_remaining = 0.0f;
      this->current_task_id = 0l;
      this->is_available = false;
    }
  }

  // field types and members
  using _vehicle_id_type =
    int32_t;
  _vehicle_id_type vehicle_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _battery_level_type =
    float;
  _battery_level_type battery_level;
  using _capacity_remaining_type =
    float;
  _capacity_remaining_type capacity_remaining;
  using _current_task_id_type =
    int32_t;
  _current_task_id_type current_task_id;
  using _is_available_type =
    bool;
  _is_available_type is_available;

  // setters for named parameter idiom
  Type & set__vehicle_id(
    const int32_t & _arg)
  {
    this->vehicle_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__battery_level(
    const float & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__capacity_remaining(
    const float & _arg)
  {
    this->capacity_remaining = _arg;
    return *this;
  }
  Type & set__current_task_id(
    const int32_t & _arg)
  {
    this->current_task_id = _arg;
    return *this;
  }
  Type & set__is_available(
    const bool & _arg)
  {
    this->is_available = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smartfleet_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const smartfleet_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smartfleet_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smartfleet_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smartfleet_msgs__msg__VehicleState
    std::shared_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smartfleet_msgs__msg__VehicleState
    std::shared_ptr<smartfleet_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->vehicle_id != other.vehicle_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->capacity_remaining != other.capacity_remaining) {
      return false;
    }
    if (this->current_task_id != other.current_task_id) {
      return false;
    }
    if (this->is_available != other.is_available) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  smartfleet_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
