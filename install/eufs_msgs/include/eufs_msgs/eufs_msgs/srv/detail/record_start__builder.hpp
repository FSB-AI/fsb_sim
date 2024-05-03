// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:srv/RecordStart.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_START__BUILDER_HPP_
#define EUFS_MSGS__SRV__DETAIL__RECORD_START__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/srv/detail/record_start__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordStart_Request_pack_number
{
public:
  Init_RecordStart_Request_pack_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eufs_msgs::srv::RecordStart_Request pack_number(::eufs_msgs::srv::RecordStart_Request::_pack_number_type arg)
  {
    msg_.pack_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::srv::RecordStart_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::srv::RecordStart_Request>()
{
  return eufs_msgs::srv::builder::Init_RecordStart_Request_pack_number();
}

}  // namespace eufs_msgs


namespace eufs_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordStart_Response_start_recording
{
public:
  Init_RecordStart_Response_start_recording()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eufs_msgs::srv::RecordStart_Response start_recording(::eufs_msgs::srv::RecordStart_Response::_start_recording_type arg)
  {
    msg_.start_recording = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::srv::RecordStart_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::srv::RecordStart_Response>()
{
  return eufs_msgs::srv::builder::Init_RecordStart_Response_start_recording();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_START__BUILDER_HPP_
