// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:srv/RecordStop.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_STOP__STRUCT_HPP_
#define EUFS_MSGS__SRV__DETAIL__RECORD_STOP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eufs_msgs__srv__RecordStop_Request __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__srv__RecordStop_Request __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RecordStop_Request_
{
  using Type = RecordStop_Request_<ContainerAllocator>;

  explicit RecordStop_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RecordStop_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::srv::RecordStop_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::srv::RecordStop_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStop_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStop_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__srv__RecordStop_Request
    std::shared_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__srv__RecordStop_Request
    std::shared_ptr<eufs_msgs::srv::RecordStop_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordStop_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordStop_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordStop_Request_

// alias to use template instance with default allocator
using RecordStop_Request =
  eufs_msgs::srv::RecordStop_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eufs_msgs


#ifndef _WIN32
# define DEPRECATED__eufs_msgs__srv__RecordStop_Response __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__srv__RecordStop_Response __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RecordStop_Response_
{
  using Type = RecordStop_Response_<ContainerAllocator>;

  explicit RecordStop_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_recording = false;
    }
  }

  explicit RecordStop_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_recording = false;
    }
  }

  // field types and members
  using _stop_recording_type =
    bool;
  _stop_recording_type stop_recording;

  // setters for named parameter idiom
  Type & set__stop_recording(
    const bool & _arg)
  {
    this->stop_recording = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::srv::RecordStop_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::srv::RecordStop_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStop_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStop_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__srv__RecordStop_Response
    std::shared_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__srv__RecordStop_Response
    std::shared_ptr<eufs_msgs::srv::RecordStop_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordStop_Response_ & other) const
  {
    if (this->stop_recording != other.stop_recording) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordStop_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordStop_Response_

// alias to use template instance with default allocator
using RecordStop_Response =
  eufs_msgs::srv::RecordStop_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eufs_msgs

namespace eufs_msgs
{

namespace srv
{

struct RecordStop
{
  using Request = eufs_msgs::srv::RecordStop_Request;
  using Response = eufs_msgs::srv::RecordStop_Response;
};

}  // namespace srv

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_STOP__STRUCT_HPP_
