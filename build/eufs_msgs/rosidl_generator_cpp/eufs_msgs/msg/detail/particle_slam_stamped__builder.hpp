// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ParticleSLAMStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/particle_slam_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ParticleSLAMStamped_state
{
public:
  explicit Init_ParticleSLAMStamped_state(::eufs_msgs::msg::ParticleSLAMStamped & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ParticleSLAMStamped state(::eufs_msgs::msg::ParticleSLAMStamped::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ParticleSLAMStamped msg_;
};

class Init_ParticleSLAMStamped_header
{
public:
  Init_ParticleSLAMStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParticleSLAMStamped_state header(::eufs_msgs::msg::ParticleSLAMStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParticleSLAMStamped_state(msg_);
  }

private:
  ::eufs_msgs::msg::ParticleSLAMStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ParticleSLAMStamped>()
{
  return eufs_msgs::msg::builder::Init_ParticleSLAMStamped_header();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__BUILDER_HPP_
