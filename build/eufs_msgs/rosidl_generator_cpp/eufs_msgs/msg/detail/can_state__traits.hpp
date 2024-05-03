// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/CanState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CAN_STATE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CAN_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/can_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanState & msg,
  std::ostream & out)
{
  out << "{";
  // member: as_state
  {
    out << "as_state: ";
    rosidl_generator_traits::value_to_yaml(msg.as_state, out);
    out << ", ";
  }

  // member: ami_state
  {
    out << "ami_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ami_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: as_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "as_state: ";
    rosidl_generator_traits::value_to_yaml(msg.as_state, out);
    out << "\n";
  }

  // member: ami_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ami_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ami_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanState & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::CanState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::CanState & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::CanState>()
{
  return "eufs_msgs::msg::CanState";
}

template<>
inline const char * name<eufs_msgs::msg::CanState>()
{
  return "eufs_msgs/msg/CanState";
}

template<>
struct has_fixed_size<eufs_msgs::msg::CanState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::msg::CanState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::msg::CanState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CAN_STATE__TRAITS_HPP_
