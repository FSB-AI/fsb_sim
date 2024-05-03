// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:msg/StereoImage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__STRUCT_HPP_
#define EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__STRUCT_HPP_

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
// Member 'color'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__eufs_msgs__msg__StereoImage __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__msg__StereoImage __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StereoImage_
{
  using Type = StereoImage_<ContainerAllocator>;

  explicit StereoImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    color(_init),
    depth(_init)
  {
    (void)_init;
  }

  explicit StereoImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    color(_alloc, _init),
    depth(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _color_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _color_type color;
  using _depth_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _depth_type depth;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__color(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__depth(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->depth = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::msg::StereoImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::msg::StereoImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::StereoImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::msg::StereoImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__msg__StereoImage
    std::shared_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__msg__StereoImage
    std::shared_ptr<eufs_msgs::msg::StereoImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StereoImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->depth != other.depth) {
      return false;
    }
    return true;
  }
  bool operator!=(const StereoImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StereoImage_

// alias to use template instance with default allocator
using StereoImage =
  eufs_msgs::msg::StereoImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__STRUCT_HPP_
