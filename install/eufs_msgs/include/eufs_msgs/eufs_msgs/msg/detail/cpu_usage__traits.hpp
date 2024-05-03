// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CPU_USAGE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CPU_USAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/cpu_usage__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'all'
// Member 'cpus'
#include "eufs_msgs/msg/detail/cpu_status__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CpuUsage & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: all
  {
    out << "all: ";
    to_flow_style_yaml(msg.all, out);
    out << ", ";
  }

  // member: cpus
  {
    if (msg.cpus.size() == 0) {
      out << "cpus: []";
    } else {
      out << "cpus: [";
      size_t pending_items = msg.cpus.size();
      for (auto item : msg.cpus) {
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
  const CpuUsage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: all
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all:\n";
    to_block_style_yaml(msg.all, out, indentation + 2);
  }

  // member: cpus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cpus.size() == 0) {
      out << "cpus: []\n";
    } else {
      out << "cpus:\n";
      for (auto item : msg.cpus) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CpuUsage & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::CpuUsage & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::CpuUsage & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::CpuUsage>()
{
  return "eufs_msgs::msg::CpuUsage";
}

template<>
inline const char * name<eufs_msgs::msg::CpuUsage>()
{
  return "eufs_msgs/msg/CpuUsage";
}

template<>
struct has_fixed_size<eufs_msgs::msg::CpuUsage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::CpuUsage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::CpuUsage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CPU_USAGE__TRAITS_HPP_
