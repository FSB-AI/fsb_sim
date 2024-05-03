// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/ParticleSLAMStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__STRUCT_HPP_

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
// Member 'state'
#include "eufs_msgs/msg/detail/particle_slam__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__ParticleSLAMStamped __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__ParticleSLAMStamped __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParticleSLAMStamped_
{
  using Type = ParticleSLAMStamped_<ContainerAllocator>;

  explicit ParticleSLAMStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state(_init)
  {
    (void)_init;
  }

  explicit ParticleSLAMStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    eufs_msgs::msg::ParticleSLAM_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const eufs_msgs::msg::ParticleSLAM_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__ParticleSLAMStamped
    std::shared_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__ParticleSLAMStamped
    std::shared_ptr<eufs_msgs::msg::ParticleSLAMStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParticleSLAMStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParticleSLAMStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParticleSLAMStamped_

// alias to use template instance with default allocator
using ParticleSLAMStamped =
  eufs_msgs::msg::ParticleSLAMStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__STRUCT_HPP_
