// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/OSS.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__OSS__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__OSS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__OSS __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__OSS __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OSS_
{
  using Type = OSS_<ContainerAllocator>;

  explicit OSS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->v_x = 0.0f;
      this->v_y = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  explicit OSS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0.0f;
      this->v_x = 0.0f;
      this->v_y = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _v_x_type =
    float;
  _v_x_type v_x;
  using _v_y_type =
    float;
  _v_y_type v_y;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__v_x(
    const float & _arg)
  {
    this->v_x = _arg;
    return *this;
  }
  Type & set__v_y(
    const float & _arg)
  {
    this->v_y = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::OSS_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::OSS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::OSS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::OSS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::OSS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::OSS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::OSS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::OSS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::OSS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::OSS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__OSS
    std::shared_ptr<eufs_msgs::msg::OSS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__OSS
    std::shared_ptr<eufs_msgs::msg::OSS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OSS_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->v_x != other.v_x) {
      return false;
    }
    if (this->v_y != other.v_y) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const OSS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OSS_

// alias to use template instance with default allocator
using OSS =
  eufs_msgs::msg::OSS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__OSS__STRUCT_HPP_
