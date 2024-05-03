// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/NodeState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__NODE_STATE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__NODE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/node_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'last_heartbeat'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: exp_heartbeat
  {
    out << "exp_heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.exp_heartbeat, out);
    out << ", ";
  }

  // member: last_heartbeat
  {
    out << "last_heartbeat: ";
    to_flow_style_yaml(msg.last_heartbeat, out);
    out << ", ";
  }

  // member: severity
  {
    out << "severity: ";
    rosidl_generator_traits::value_to_yaml(msg.severity, out);
    out << ", ";
  }

  // member: online
  {
    out << "online: ";
    rosidl_generator_traits::value_to_yaml(msg.online, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: exp_heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exp_heartbeat: ";
    rosidl_generator_traits::value_to_yaml(msg.exp_heartbeat, out);
    out << "\n";
  }

  // member: last_heartbeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_heartbeat:\n";
    to_block_style_yaml(msg.last_heartbeat, out, indentation + 2);
  }

  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity: ";
    rosidl_generator_traits::value_to_yaml(msg.severity, out);
    out << "\n";
  }

  // member: online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "online: ";
    rosidl_generator_traits::value_to_yaml(msg.online, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeState & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::NodeState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::NodeState & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::NodeState>()
{
  return "eufs_msgs::msg::NodeState";
}

template<>
inline const char * name<eufs_msgs::msg::NodeState>()
{
  return "eufs_msgs/msg/NodeState";
}

template<>
struct has_fixed_size<eufs_msgs::msg::NodeState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::NodeState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::NodeState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__NODE_STATE__TRAITS_HPP_
