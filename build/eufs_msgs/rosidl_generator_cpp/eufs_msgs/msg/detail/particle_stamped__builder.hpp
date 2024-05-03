// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ParticleStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_STAMPED__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/particle_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ParticleStamped_particle
{
public:
  explicit Init_ParticleStamped_particle(::eufs_msgs::msg::ParticleStamped & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ParticleStamped particle(::eufs_msgs::msg::ParticleStamped::_particle_type arg)
  {
    msg_.particle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ParticleStamped msg_;
};

class Init_ParticleStamped_header
{
public:
  Init_ParticleStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParticleStamped_particle header(::eufs_msgs::msg::ParticleStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ParticleStamped_particle(msg_);
  }

private:
  ::eufs_msgs::msg::ParticleStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ParticleStamped>()
{
  return eufs_msgs::msg::builder::Init_ParticleStamped_header();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_STAMPED__BUILDER_HPP_
