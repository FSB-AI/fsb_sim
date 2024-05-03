// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/cpu_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_CpuStatus_idle
{
public:
  explicit Init_CpuStatus_idle(::eufs_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::CpuStatus idle(::eufs_msgs::msg::CpuStatus::_idle_type arg)
  {
    msg_.idle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_sys
{
public:
  explicit Init_CpuStatus_sys(::eufs_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_idle sys(::eufs_msgs::msg::CpuStatus::_sys_type arg)
  {
    msg_.sys = std::move(arg);
    return Init_CpuStatus_idle(msg_);
  }

private:
  ::eufs_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_nice
{
public:
  explicit Init_CpuStatus_nice(::eufs_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_sys nice(::eufs_msgs::msg::CpuStatus::_nice_type arg)
  {
    msg_.nice = std::move(arg);
    return Init_CpuStatus_sys(msg_);
  }

private:
  ::eufs_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_usr
{
public:
  explicit Init_CpuStatus_usr(::eufs_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_nice usr(::eufs_msgs::msg::CpuStatus::_usr_type arg)
  {
    msg_.usr = std::move(arg);
    return Init_CpuStatus_nice(msg_);
  }

private:
  ::eufs_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_total
{
public:
  explicit Init_CpuStatus_total(::eufs_msgs::msg::CpuStatus & msg)
  : msg_(msg)
  {}
  Init_CpuStatus_usr total(::eufs_msgs::msg::CpuStatus::_total_type arg)
  {
    msg_.total = std::move(arg);
    return Init_CpuStatus_usr(msg_);
  }

private:
  ::eufs_msgs::msg::CpuStatus msg_;
};

class Init_CpuStatus_status
{
public:
  Init_CpuStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CpuStatus_total status(::eufs_msgs::msg::CpuStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CpuStatus_total(msg_);
  }

private:
  ::eufs_msgs::msg::CpuStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::CpuStatus>()
{
  return eufs_msgs::msg::builder::Init_CpuStatus_status();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CPU_STATUS__BUILDER_HPP_
