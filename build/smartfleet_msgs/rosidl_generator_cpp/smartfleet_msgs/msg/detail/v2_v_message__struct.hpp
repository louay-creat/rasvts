// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from smartfleet_msgs:msg/V2VMessage.idl
// generated code does not contain a copyright notice

#ifndef SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__STRUCT_HPP_
#define SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__smartfleet_msgs__msg__V2VMessage __attribute__((deprecated))
#else
# define DEPRECATED__smartfleet_msgs__msg__V2VMessage __declspec(deprecated)
#endif

namespace smartfleet_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct V2VMessage_
{
  using Type = V2VMessage_<ContainerAllocator>;

  explicit V2VMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0l;
      this->type = "";
      this->payload = "";
    }
  }

  explicit V2VMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    type(_alloc),
    payload(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sender_id = 0l;
      this->type = "";
      this->payload = "";
    }
  }

  // field types and members
  using _sender_id_type =
    int32_t;
  _sender_id_type sender_id;
  using _receivers_id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _receivers_id_type receivers_id;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _payload_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__sender_id(
    const int32_t & _arg)
  {
    this->sender_id = _arg;
    return *this;
  }
  Type & set__receivers_id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->receivers_id = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__payload(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    smartfleet_msgs::msg::V2VMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const smartfleet_msgs::msg::V2VMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      smartfleet_msgs::msg::V2VMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      smartfleet_msgs::msg::V2VMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__smartfleet_msgs__msg__V2VMessage
    std::shared_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__smartfleet_msgs__msg__V2VMessage
    std::shared_ptr<smartfleet_msgs::msg::V2VMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const V2VMessage_ & other) const
  {
    if (this->sender_id != other.sender_id) {
      return false;
    }
    if (this->receivers_id != other.receivers_id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const V2VMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct V2VMessage_

// alias to use template instance with default allocator
using V2VMessage =
  smartfleet_msgs::msg::V2VMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace smartfleet_msgs

#endif  // SMARTFLEET_MSGS__MSG__DETAIL__V2_V_MESSAGE__STRUCT_HPP_
