// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:srv/RecordStop.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_STOP__BUILDER_HPP_
#define EUFS_MSGS__SRV__DETAIL__RECORD_STOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/srv/detail/record_stop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::srv::RecordStop_Request>()
{
  return ::eufs_msgs::srv::RecordStop_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace eufs_msgs


namespace eufs_msgs
{

namespace srv
{

namespace builder
{

class Init_RecordStop_Response_stop_recording
{
public:
  Init_RecordStop_Response_stop_recording()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eufs_msgs::srv::RecordStop_Response stop_recording(::eufs_msgs::srv::RecordStop_Response::_stop_recording_type arg)
  {
    msg_.stop_recording = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::srv::RecordStop_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::srv::RecordStop_Response>()
{
  return eufs_msgs::srv::builder::Init_RecordStop_Response_stop_recording();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_STOP__BUILDER_HPP_
