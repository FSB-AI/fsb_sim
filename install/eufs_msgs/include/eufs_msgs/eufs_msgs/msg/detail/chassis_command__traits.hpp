// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ChassisCommand.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CHASSIS_COMMAND__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CHASSIS_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/chassis_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisCommand & msg,
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

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << ", ";
  }

  // member: front_brake
  {
    out << "front_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisCommand & msg,
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

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
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

  // member: front_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.front_brake, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisCommand & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::ChassisCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ChassisCommand & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ChassisCommand>()
{
  return "eufs_msgs::msg::ChassisCommand";
}

template<>
inline const char * name<eufs_msgs::msg::ChassisCommand>()
{
  return "eufs_msgs/msg/ChassisCommand";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ChassisCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ChassisCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ChassisCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CHASSIS_COMMAND__TRAITS_HPP_
