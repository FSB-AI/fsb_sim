// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/FullState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__FULL_STATE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__FULL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/full_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FullState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x_pos
  {
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << ", ";
  }

  // member: y_pos
  {
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: u_x
  {
    out << "u_x: ";
    rosidl_generator_traits::value_to_yaml(msg.u_x, out);
    out << ", ";
  }

  // member: u_y
  {
    out << "u_y: ";
    rosidl_generator_traits::value_to_yaml(msg.u_y, out);
    out << ", ";
  }

  // member: yaw_mder
  {
    out << "yaw_mder: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_mder, out);
    out << ", ";
  }

  // member: front_throttle
  {
    out << "front_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_throttle, out);
    out << ", ";
  }

  // member: rear_throttle
  {
    out << "rear_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_throttle, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FullState & msg,
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

  // member: x_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.x_pos, out);
    out << "\n";
  }

  // member: y_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.y_pos, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: u_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_x: ";
    rosidl_generator_traits::value_to_yaml(msg.u_x, out);
    out << "\n";
  }

  // member: u_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u_y: ";
    rosidl_generator_traits::value_to_yaml(msg.u_y, out);
    out << "\n";
  }

  // member: yaw_mder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_mder: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_mder, out);
    out << "\n";
  }

  // member: front_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.front_throttle, out);
    out << "\n";
  }

  // member: rear_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_throttle, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FullState & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::FullState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::FullState & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::FullState>()
{
  return "eufs_msgs::msg::FullState";
}

template<>
inline const char * name<eufs_msgs::msg::FullState>()
{
  return "eufs_msgs/msg/FullState";
}

template<>
struct has_fixed_size<eufs_msgs::msg::FullState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::FullState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<eufs_msgs::msg::FullState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__FULL_STATE__TRAITS_HPP_
