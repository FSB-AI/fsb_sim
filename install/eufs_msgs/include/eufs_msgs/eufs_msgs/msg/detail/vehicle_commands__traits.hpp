// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/VehicleCommands.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__VEHICLE_COMMANDS__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__VEHICLE_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/vehicle_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleCommands & msg,
  std::ostream & out)
{
  out << "{";
  // member: handshake
  {
    out << "handshake: ";
    rosidl_generator_traits::value_to_yaml(msg.handshake, out);
    out << ", ";
  }

  // member: ebs
  {
    out << "ebs: ";
    rosidl_generator_traits::value_to_yaml(msg.ebs, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: mission_status
  {
    out << "mission_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_status, out);
    out << ", ";
  }

  // member: braking
  {
    out << "braking: ";
    rosidl_generator_traits::value_to_yaml(msg.braking, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << ", ";
  }

  // member: rpm
  {
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: handshake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handshake: ";
    rosidl_generator_traits::value_to_yaml(msg.handshake, out);
    out << "\n";
  }

  // member: ebs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ebs: ";
    rosidl_generator_traits::value_to_yaml(msg.ebs, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: mission_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_status: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_status, out);
    out << "\n";
  }

  // member: braking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braking: ";
    rosidl_generator_traits::value_to_yaml(msg.braking, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
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

  // member: rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.rpm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleCommands & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::VehicleCommands & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::VehicleCommands & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::VehicleCommands>()
{
  return "eufs_msgs::msg::VehicleCommands";
}

template<>
inline const char * name<eufs_msgs::msg::VehicleCommands>()
{
  return "eufs_msgs/msg/VehicleCommands";
}

template<>
struct has_fixed_size<eufs_msgs::msg::VehicleCommands>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::msg::VehicleCommands>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::msg::VehicleCommands>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__VEHICLE_COMMANDS__TRAITS_HPP_
