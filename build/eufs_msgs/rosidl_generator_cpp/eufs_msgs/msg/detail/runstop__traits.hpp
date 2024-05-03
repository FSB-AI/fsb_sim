// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/Runstop.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__RUNSTOP__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__RUNSTOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/runstop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Runstop & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sender
  {
    out << "sender: ";
    rosidl_generator_traits::value_to_yaml(msg.sender, out);
    out << ", ";
  }

  // member: motion_enabled
  {
    out << "motion_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Runstop & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sender
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender: ";
    rosidl_generator_traits::value_to_yaml(msg.sender, out);
    out << "\n";
  }

  // member: motion_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Runstop & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::Runstop & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::Runstop & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::Runstop>()
{
  return "eufs_msgs::msg::Runstop";
}

template<>
inline const char * name<eufs_msgs::msg::Runstop>()
{
  return "eufs_msgs/msg/Runstop";
}

template<>
struct has_fixed_size<eufs_msgs::msg::Runstop>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::Runstop>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::Runstop>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__RUNSTOP__TRAITS_HPP_
