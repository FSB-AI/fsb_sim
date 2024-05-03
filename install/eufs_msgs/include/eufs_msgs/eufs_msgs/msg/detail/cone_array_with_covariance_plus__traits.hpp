// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConeArrayWithCovariancePlus.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ARRAY_WITH_COVARIANCE_PLUS__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ARRAY_WITH_COVARIANCE_PLUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/cone_array_with_covariance_plus__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cones'
#include "eufs_msgs/msg/detail/cone_with_covariance_plus__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConeArrayWithCovariancePlus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cones
  {
    if (msg.cones.size() == 0) {
      out << "cones: []";
    } else {
      out << "cones: [";
      size_t pending_items = msg.cones.size();
      for (auto item : msg.cones) {
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
  const ConeArrayWithCovariancePlus & msg,
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

  // member: cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cones.size() == 0) {
      out << "cones: []\n";
    } else {
      out << "cones:\n";
      for (auto item : msg.cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConeArrayWithCovariancePlus & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::ConeArrayWithCovariancePlus & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ConeArrayWithCovariancePlus & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ConeArrayWithCovariancePlus>()
{
  return "eufs_msgs::msg::ConeArrayWithCovariancePlus";
}

template<>
inline const char * name<eufs_msgs::msg::ConeArrayWithCovariancePlus>()
{
  return "eufs_msgs/msg/ConeArrayWithCovariancePlus";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConeArrayWithCovariancePlus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConeArrayWithCovariancePlus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ConeArrayWithCovariancePlus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ARRAY_WITH_COVARIANCE_PLUS__TRAITS_HPP_
