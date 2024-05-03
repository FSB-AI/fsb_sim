// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConeWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_WITH_COVARIANCE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_WITH_COVARIANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/cone_with_covariance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConeWithCovariance & msg,
  std::ostream & out)
{
  out << "{";
  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const ConeWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConeWithCovariance & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::ConeWithCovariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ConeWithCovariance & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ConeWithCovariance>()
{
  return "eufs_msgs::msg::ConeWithCovariance";
}

template<>
inline const char * name<eufs_msgs::msg::ConeWithCovariance>()
{
  return "eufs_msgs/msg/ConeWithCovariance";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConeWithCovariance>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConeWithCovariance>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<eufs_msgs::msg::ConeWithCovariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_WITH_COVARIANCE__TRAITS_HPP_
