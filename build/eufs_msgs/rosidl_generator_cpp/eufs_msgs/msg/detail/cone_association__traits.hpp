// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConeAssociation.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/cone_association__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'first'
// Member 'second'
#include "eufs_msgs/msg/detail/cone_with_covariance__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConeAssociation & msg,
  std::ostream & out)
{
  out << "{";
  // member: first
  {
    out << "first: ";
    to_flow_style_yaml(msg.first, out);
    out << ", ";
  }

  // member: second
  {
    out << "second: ";
    to_flow_style_yaml(msg.second, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConeAssociation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: first
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first:\n";
    to_block_style_yaml(msg.first, out, indentation + 2);
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second:\n";
    to_block_style_yaml(msg.second, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConeAssociation & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::ConeAssociation & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ConeAssociation & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ConeAssociation>()
{
  return "eufs_msgs::msg::ConeAssociation";
}

template<>
inline const char * name<eufs_msgs::msg::ConeAssociation>()
{
  return "eufs_msgs/msg/ConeAssociation";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConeAssociation>
  : std::integral_constant<bool, has_fixed_size<eufs_msgs::msg::ConeWithCovariance>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConeAssociation>
  : std::integral_constant<bool, has_bounded_size<eufs_msgs::msg::ConeWithCovariance>::value> {};

template<>
struct is_message<eufs_msgs::msg::ConeAssociation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__TRAITS_HPP_
