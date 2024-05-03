// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/ConeAssociationArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__STRUCT_HPP_

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
// Member 'associations'
#include "eufs_msgs/msg/detail/cone_association_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__ConeAssociationArrayStamped __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__ConeAssociationArrayStamped __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeAssociationArrayStamped_
{
  using Type = ConeAssociationArrayStamped_<ContainerAllocator>;

  explicit ConeAssociationArrayStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    associations(_init)
  {
    (void)_init;
  }

  explicit ConeAssociationArrayStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    associations(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _associations_type =
    eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>;
  _associations_type associations;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__associations(
    const eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> & _arg)
  {
    this->associations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__ConeAssociationArrayStamped
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__ConeAssociationArrayStamped
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArrayStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeAssociationArrayStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->associations != other.associations) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeAssociationArrayStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeAssociationArrayStamped_

// alias to use template instance with default allocator
using ConeAssociationArrayStamped =
  eufs_msgs::msg::ConeAssociationArrayStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__STRUCT_HPP_
