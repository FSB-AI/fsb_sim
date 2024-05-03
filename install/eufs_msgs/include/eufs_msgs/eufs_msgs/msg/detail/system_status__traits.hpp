// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'topic_statuses'
#include "eufs_msgs/msg/detail/topic_status__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: topic_statuses
  {
    if (msg.topic_statuses.size() == 0) {
      out << "topic_statuses: []";
    } else {
      out << "topic_statuses: [";
      size_t pending_items = msg.topic_statuses.size();
      for (auto item : msg.topic_statuses) {
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
  const SystemStatus & msg,
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

  // member: topic_statuses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topic_statuses.size() == 0) {
      out << "topic_statuses: []\n";
    } else {
      out << "topic_statuses:\n";
      for (auto item : msg.topic_statuses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::SystemStatus & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::SystemStatus>()
{
  return "eufs_msgs::msg::SystemStatus";
}

template<>
inline const char * name<eufs_msgs::msg::SystemStatus>()
{
  return "eufs_msgs/msg/SystemStatus";
}

template<>
struct has_fixed_size<eufs_msgs::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::SystemStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
