// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/particle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'map'
#include "eufs_msgs/msg/detail/cone_array_with_covariance__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Particle & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: map
  {
    out << "map: ";
    to_flow_style_yaml(msg.map, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Particle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map:\n";
    to_block_style_yaml(msg.map, out, indentation + 2);
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Particle & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::Particle & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::Particle & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::Particle>()
{
  return "eufs_msgs::msg::Particle";
}

template<>
inline const char * name<eufs_msgs::msg::Particle>()
{
  return "eufs_msgs/msg/Particle";
}

template<>
struct has_fixed_size<eufs_msgs::msg::Particle>
  : std::integral_constant<bool, has_fixed_size<eufs_msgs::msg::ConeArrayWithCovariance>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::Particle>
  : std::integral_constant<bool, has_bounded_size<eufs_msgs::msg::ConeArrayWithCovariance>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<eufs_msgs::msg::Particle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_
