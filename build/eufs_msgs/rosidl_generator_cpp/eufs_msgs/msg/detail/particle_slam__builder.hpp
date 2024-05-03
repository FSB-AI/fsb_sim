// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ParticleSLAM.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/particle_slam__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ParticleSLAM_particles
{
public:
  explicit Init_ParticleSLAM_particles(::eufs_msgs::msg::ParticleSLAM & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ParticleSLAM particles(::eufs_msgs::msg::ParticleSLAM::_particles_type arg)
  {
    msg_.particles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ParticleSLAM msg_;
};

class Init_ParticleSLAM_best_particle_idx
{
public:
  Init_ParticleSLAM_best_particle_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParticleSLAM_particles best_particle_idx(::eufs_msgs::msg::ParticleSLAM::_best_particle_idx_type arg)
  {
    msg_.best_particle_idx = std::move(arg);
    return Init_ParticleSLAM_particles(msg_);
  }

private:
  ::eufs_msgs::msg::ParticleSLAM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ParticleSLAM>()
{
  return eufs_msgs::msg::builder::Init_ParticleSLAM_best_particle_idx();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__BUILDER_HPP_
