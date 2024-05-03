// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from eufs_msgs:srv/RecordStart.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_START__STRUCT_HPP_
#define EUFS_MSGS__SRV__DETAIL__RECORD_START__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__eufs_msgs__srv__RecordStart_Request __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__srv__RecordStart_Request __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RecordStart_Request_
{
  using Type = RecordStart_Request_<ContainerAllocator>;

  explicit RecordStart_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pack_number = 0ll;
    }
  }

  explicit RecordStart_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pack_number = 0ll;
    }
  }

  // field types and members
  using _pack_number_type =
    int64_t;
  _pack_number_type pack_number;

  // setters for named parameter idiom
  Type & set__pack_number(
    const int64_t & _arg)
  {
    this->pack_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::srv::RecordStart_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::srv::RecordStart_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStart_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStart_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__srv__RecordStart_Request
    std::shared_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__srv__RecordStart_Request
    std::shared_ptr<eufs_msgs::srv::RecordStart_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordStart_Request_ & other) const
  {
    if (this->pack_number != other.pack_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordStart_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordStart_Request_

// alias to use template instance with default allocator
using RecordStart_Request =
  eufs_msgs::srv::RecordStart_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eufs_msgs


#ifndef _WIN32
# define DEPRECATED__eufs_msgs__srv__RecordStart_Response __attribute__((deprecated))
#else
# define DEPRECATED__eufs_msgs__srv__RecordStart_Response __declspec(deprecated)
#endif

namespace eufs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RecordStart_Response_
{
  using Type = RecordStart_Response_<ContainerAllocator>;

  explicit RecordStart_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_recording = false;
    }
  }

  explicit RecordStart_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_recording = false;
    }
  }

  // field types and members
  using _start_recording_type =
    bool;
  _start_recording_type start_recording;

  // setters for named parameter idiom
  Type & set__start_recording(
    const bool & _arg)
  {
    this->start_recording = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    eufs_msgs::srv::RecordStart_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const eufs_msgs::srv::RecordStart_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStart_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      eufs_msgs::srv::RecordStart_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__eufs_msgs__srv__RecordStart_Response
    std::shared_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__eufs_msgs__srv__RecordStart_Response
    std::shared_ptr<eufs_msgs::srv::RecordStart_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecordStart_Response_ & other) const
  {
    if (this->start_recording != other.start_recording) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecordStart_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecordStart_Response_

// alias to use template instance with default allocator
using RecordStart_Response =
  eufs_msgs::srv::RecordStart_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace eufs_msgs

namespace eufs_msgs
{

namespace srv
{

struct RecordStart
{
  using Request = eufs_msgs::srv::RecordStart_Request;
  using Response = eufs_msgs::srv::RecordStart_Response;
};

}  // namespace srv

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_START__STRUCT_HPP_
