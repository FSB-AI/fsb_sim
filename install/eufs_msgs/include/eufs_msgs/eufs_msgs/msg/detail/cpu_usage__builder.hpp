// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CPU_USAGE__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__CPU_USAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/cpu_usage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_CpuUsage_cpus
{
public:
  explicit Init_CpuUsage_cpus(::eufs_msgs::msg::CpuUsage & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::CpuUsage cpus(::eufs_msgs::msg::CpuUsage::_cpus_type arg)
  {
    msg_.cpus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::CpuUsage msg_;
};

class Init_CpuUsage_all
{
public:
  explicit Init_CpuUsage_all(::eufs_msgs::msg::CpuUsage & msg)
  : msg_(msg)
  {}
  Init_CpuUsage_cpus all(::eufs_msgs::msg::CpuUsage::_all_type arg)
  {
    msg_.all = std::move(arg);
    return Init_CpuUsage_cpus(msg_);
  }

private:
  ::eufs_msgs::msg::CpuUsage msg_;
};

class Init_CpuUsage_stamp
{
public:
  Init_CpuUsage_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CpuUsage_all stamp(::eufs_msgs::msg::CpuUsage::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_CpuUsage_all(msg_);
  }

private:
  ::eufs_msgs::msg::CpuUsage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::CpuUsage>()
{
  return eufs_msgs::msg::builder::Init_CpuUsage_stamp();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CPU_USAGE__BUILDER_HPP_
