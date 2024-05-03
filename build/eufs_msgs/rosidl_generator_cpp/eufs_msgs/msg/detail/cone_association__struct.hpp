// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/ConeAssociation.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'first'
// Member 'second'
#include "eufs_msgs/msg/detail/cone_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__ConeAssociation __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__ConeAssociation __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeAssociation_
{
  using Type = ConeAssociation_<ContainerAllocator>;

  explicit ConeAssociation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first(_init),
    second(_init)
  {
    (void)_init;
  }

  explicit ConeAssociation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : first(_alloc, _init),
    second(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _first_type =
    eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator>;
  _first_type first;
  using _second_type =
    eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator>;
  _second_type second;

  // setters for named parameter idiom
  Type & set__first(
    const eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator> & _arg)
  {
    this->first = _arg;
    return *this;
  }
  Type & set__second(
    const eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator> & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::ConeAssociation_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::ConeAssociation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__ConeAssociation
    std::shared_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__ConeAssociation
    std::shared_ptr<eufs_msgs::msg::ConeAssociation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeAssociation_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeAssociation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeAssociation_

// alias to use template instance with default allocator
using ConeAssociation =
  eufs_msgs::msg::ConeAssociation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__STRUCT_HPP_
