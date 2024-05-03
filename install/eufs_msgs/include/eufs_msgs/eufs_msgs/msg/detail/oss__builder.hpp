// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/OSS.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__OSS__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__OSS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/oss__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_OSS_yaw_rate
{
public:
  explicit Init_OSS_yaw_rate(::eufs_msgs::msg::OSS & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::OSS yaw_rate(::eufs_msgs::msg::OSS::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::OSS msg_;
};

class Init_OSS_v_y
{
public:
  explicit Init_OSS_v_y(::eufs_msgs::msg::OSS & msg)
  : msg_(msg)
  {}
  Init_OSS_yaw_rate v_y(::eufs_msgs::msg::OSS::_v_y_type arg)
  {
    msg_.v_y = std::move(arg);
    return Init_OSS_yaw_rate(msg_);
  }

private:
  ::eufs_msgs::msg::OSS msg_;
};

class Init_OSS_v_x
{
public:
  explicit Init_OSS_v_x(::eufs_msgs::msg::OSS & msg)
  : msg_(msg)
  {}
  Init_OSS_v_y v_x(::eufs_msgs::msg::OSS::_v_x_type arg)
  {
    msg_.v_x = std::move(arg);
    return Init_OSS_v_y(msg_);
  }

private:
  ::eufs_msgs::msg::OSS msg_;
};

class Init_OSS_velocity
{
public:
  explicit Init_OSS_velocity(::eufs_msgs::msg::OSS & msg)
  : msg_(msg)
  {}
  Init_OSS_v_x velocity(::eufs_msgs::msg::OSS::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_OSS_v_x(msg_);
  }

private:
  ::eufs_msgs::msg::OSS msg_;
};

class Init_OSS_header
{
public:
  Init_OSS_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OSS_velocity header(::eufs_msgs::msg::OSS::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OSS_velocity(msg_);
  }

private:
  ::eufs_msgs::msg::OSS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::OSS>()
{
  return eufs_msgs::msg::builder::Init_OSS_header();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__OSS__BUILDER_HPP_
