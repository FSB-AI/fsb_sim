// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/LapStats.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__LAP_STATS__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__LAP_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/lap_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LapStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lap_number
  {
    out << "lap_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_number, out);
    out << ", ";
  }

  // member: lap_time
  {
    out << "lap_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_time, out);
    out << ", ";
  }

  // member: avg_speed
  {
    out << "avg_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_speed, out);
    out << ", ";
  }

  // member: max_speed
  {
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << ", ";
  }

  // member: speed_var
  {
    out << "speed_var: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_var, out);
    out << ", ";
  }

  // member: max_slip
  {
    out << "max_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.max_slip, out);
    out << ", ";
  }

  // member: max_lateral_accel
  {
    out << "max_lateral_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.max_lateral_accel, out);
    out << ", ";
  }

  // member: normalized_deviation_mse
  {
    out << "normalized_deviation_mse: ";
    rosidl_generator_traits::value_to_yaml(msg.normalized_deviation_mse, out);
    out << ", ";
  }

  // member: deviation_var
  {
    out << "deviation_var: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_var, out);
    out << ", ";
  }

  // member: max_deviation
  {
    out << "max_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_deviation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LapStats & msg,
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

  // member: lap_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_number, out);
    out << "\n";
  }

  // member: lap_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap_time: ";
    rosidl_generator_traits::value_to_yaml(msg.lap_time, out);
    out << "\n";
  }

  // member: avg_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avg_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.avg_speed, out);
    out << "\n";
  }

  // member: max_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << "\n";
  }

  // member: speed_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_var: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_var, out);
    out << "\n";
  }

  // member: max_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_slip: ";
    rosidl_generator_traits::value_to_yaml(msg.max_slip, out);
    out << "\n";
  }

  // member: max_lateral_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_lateral_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.max_lateral_accel, out);
    out << "\n";
  }

  // member: normalized_deviation_mse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normalized_deviation_mse: ";
    rosidl_generator_traits::value_to_yaml(msg.normalized_deviation_mse, out);
    out << "\n";
  }

  // member: deviation_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deviation_var: ";
    rosidl_generator_traits::value_to_yaml(msg.deviation_var, out);
    out << "\n";
  }

  // member: max_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_deviation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LapStats & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::LapStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::LapStats & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::LapStats>()
{
  return "eufs_msgs::msg::LapStats";
}

template<>
inline const char * name<eufs_msgs::msg::LapStats>()
{
  return "eufs_msgs/msg/LapStats";
}

template<>
struct has_fixed_size<eufs_msgs::msg::LapStats>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<eufs_msgs::msg::LapStats>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<eufs_msgs::msg::LapStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__LAP_STATS__TRAITS_HPP_
