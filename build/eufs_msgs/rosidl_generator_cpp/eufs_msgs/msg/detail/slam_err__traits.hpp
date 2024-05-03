// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/SLAMErr.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__SLAM_ERR__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__SLAM_ERR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/slam_err__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SLAMErr & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x_err
  {
    out << "x_err: ";
    rosidl_generator_traits::value_to_yaml(msg.x_err, out);
    out << ", ";
  }

  // member: y_err
  {
    out << "y_err: ";
    rosidl_generator_traits::value_to_yaml(msg.y_err, out);
    out << ", ";
  }

  // member: z_err
  {
    out << "z_err: ";
    rosidl_generator_traits::value_to_yaml(msg.z_err, out);
    out << ", ";
  }

  // member: x_orient_err
  {
    out << "x_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.x_orient_err, out);
    out << ", ";
  }

  // member: y_orient_err
  {
    out << "y_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.y_orient_err, out);
    out << ", ";
  }

  // member: z_orient_err
  {
    out << "z_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.z_orient_err, out);
    out << ", ";
  }

  // member: w_orient_err
  {
    out << "w_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.w_orient_err, out);
    out << ", ";
  }

  // member: map_similarity
  {
    out << "map_similarity: ";
    rosidl_generator_traits::value_to_yaml(msg.map_similarity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SLAMErr & msg,
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

  // member: x_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_err: ";
    rosidl_generator_traits::value_to_yaml(msg.x_err, out);
    out << "\n";
  }

  // member: y_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_err: ";
    rosidl_generator_traits::value_to_yaml(msg.y_err, out);
    out << "\n";
  }

  // member: z_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_err: ";
    rosidl_generator_traits::value_to_yaml(msg.z_err, out);
    out << "\n";
  }

  // member: x_orient_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.x_orient_err, out);
    out << "\n";
  }

  // member: y_orient_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.y_orient_err, out);
    out << "\n";
  }

  // member: z_orient_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.z_orient_err, out);
    out << "\n";
  }

  // member: w_orient_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w_orient_err: ";
    rosidl_generator_traits::value_to_yaml(msg.w_orient_err, out);
    out << "\n";
  }

  // member: map_similarity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_similarity: ";
    rosidl_generator_traits::value_to_yaml(msg.map_similarity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SLAMErr & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::SLAMErr & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::SLAMErr & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::SLAMErr>()
{
  return "eufs_msgs::msg::SLAMErr";
}

template<>
inline const char * name<eufs_msgs::msg::SLAMErr>()
{
  return "eufs_msgs/msg/SLAMErr";
}

template<>
struct has_fixed_size<eufs_msgs::msg::SLAMErr>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::SLAMErr>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<eufs_msgs::msg::SLAMErr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__SLAM_ERR__TRAITS_HPP_
