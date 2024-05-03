// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ParticleSLAM.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/particle_slam__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'particles'
#include "eufs_msgs/msg/detail/particle__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParticleSLAM & msg,
  std::ostream & out)
{
  out << "{";
  // member: best_particle_idx
  {
    out << "best_particle_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.best_particle_idx, out);
    out << ", ";
  }

  // member: particles
  {
    if (msg.particles.size() == 0) {
      out << "particles: []";
    } else {
      out << "particles: [";
      size_t pending_items = msg.particles.size();
      for (auto item : msg.particles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParticleSLAM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: best_particle_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "best_particle_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.best_particle_idx, out);
    out << "\n";
  }

  // member: particles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.particles.size() == 0) {
      out << "particles: []\n";
    } else {
      out << "particles:\n";
      for (auto item : msg.particles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParticleSLAM & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace eufs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use eufs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eufs_msgs::msg::ParticleSLAM & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ParticleSLAM & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ParticleSLAM>()
{
  return "eufs_msgs::msg::ParticleSLAM";
}

template<>
inline const char * name<eufs_msgs::msg::ParticleSLAM>()
{
  return "eufs_msgs/msg/ParticleSLAM";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ParticleSLAM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ParticleSLAM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ParticleSLAM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__TRAITS_HPP_
