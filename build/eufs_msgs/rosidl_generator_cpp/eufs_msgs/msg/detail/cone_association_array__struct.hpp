// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'matched'
#include "eufs_msgs/msg/detail/cone_association__struct.hpp"
// Member 'unmatched'
#include "eufs_msgs/msg/detail/cone_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__ConeAssociationArray __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__ConeAssociationArray __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeAssociationArray_
{
  using Type = ConeAssociationArray_<ContainerAllocator>;

  explicit ConeAssociationArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->threshold = 0.0;
    }
  }

  explicit ConeAssociationArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->threshold = 0.0;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _threshold_type =
    double;
  _threshold_type threshold;
  using _matched_type =
    std::vector<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>>;
  _matched_type matched;
  using _unmatched_type =
    std::vector<eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator>>>;
  _unmatched_type unmatched;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__threshold(
    const double & _arg)
  {
    this->threshold = _arg;
    return *this;
  }
  Type & set__matched(
    const std::vector<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eufs_msgs::msg::ConeAssociation_<ContainerAllocator>>> & _arg)
  {
    this->matched = _arg;
    return *this;
  }
  Type & set__unmatched(
    const std::vector<eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<eufs_msgs::msg::ConeWithCovariance_<ContainerAllocator>>> & _arg)
  {
    this->unmatched = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__ConeAssociationArray
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__ConeAssociationArray
    std::shared_ptr<eufs_msgs::msg::ConeAssociationArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeAssociationArray_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->threshold != other.threshold) {
      return false;
    }
    if (this->matched != other.matched) {
      return false;
    }
    if (this->unmatched != other.unmatched) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeAssociationArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeAssociationArray_

// alias to use template instance with default allocator
using ConeAssociationArray =
  eufs_msgs::msg::ConeAssociationArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__STRUCT_HPP_
