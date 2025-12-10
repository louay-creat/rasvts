// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smartfleet_msgs:msg/DeliveryTask.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__STRUCT_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pickup'
// Member 'dropoff'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'release_time'
// Member 'deadline'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__smartfleet_msgs__msg__DeliveryTask __attribute__((deprecated))
#else
# define DEPRECATED__smartfleet_msgs__msg__DeliveryTask __declspec(deprecated)
#endif

namespace smartfleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryTask_
{
  using Type = DeliveryTask_<ContainerAllocator>;

  explicit DeliveryTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pickup(_init),
    dropoff(_init),
    release_time(_init),
    deadline(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->size = 0.0f;
      this->weight = 0.0f;
    }
  }

  explicit DeliveryTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pickup(_alloc, _init),
    dropoff(_alloc, _init),
    release_time(_alloc, _init),
    deadline(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->size = 0.0f;
      this->weight = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _pickup_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pickup_type pickup;
  using _dropoff_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _dropoff_type dropoff;
  using _release_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _release_time_type release_time;
  using _deadline_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _deadline_type deadline;
  using _size_type =
    float;
  _size_type size;
  using _weight_type =
    float;
  _weight_type weight;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pickup(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pickup = _arg;
    return *this;
  }
  Type & set__dropoff(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->dropoff = _arg;
    return *this;
  }
  Type & set__release_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->release_time = _arg;
    return *this;
  }
  Type & set__deadline(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->deadline = _arg;
    return *this;
  }
  Type & set__size(
    const float & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__weight(
    const float & _arg)
  {
    this->weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smartfleet_msgs__msg__DeliveryTask
    std::shared_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smartfleet_msgs__msg__DeliveryTask
    std::shared_ptr<smartfleet_msgs::msg::DeliveryTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryTask_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pickup != other.pickup) {
      return false;
    }
    if (this->dropoff != other.dropoff) {
      return false;
    }
    if (this->release_time != other.release_time) {
      return false;
    }
    if (this->deadline != other.deadline) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryTask_

// alias to use template instance with default allocator
using DeliveryTask =
  smartfleet_msgs::msg::DeliveryTask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__DELIVERY_TASK__STRUCT_HPP_
