// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/car_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: child_frame_id
  {
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: linear_acceleration_covariance
  {
    if (msg.linear_acceleration_covariance.size() == 0) {
      out << "linear_acceleration_covariance: []";
    } else {
      out << "linear_acceleration_covariance: [";
      size_t pending_items = msg.linear_acceleration_covariance.size();
      for (auto item : msg.linear_acceleration_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: slip_angle
  {
    out << "slip_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.slip_angle, out);
    out << ", ";
  }

  // member: state_of_charge
  {
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarState & msg,
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

  // member: child_frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_frame_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: linear_acceleration_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.linear_acceleration_covariance.size() == 0) {
      out << "linear_acceleration_covariance: []\n";
    } else {
      out << "linear_acceleration_covariance:\n";
      for (auto item : msg.linear_acceleration_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: slip_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slip_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.slip_angle, out);
    out << "\n";
  }

  // member: state_of_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarState & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::CarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::CarState & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::CarState>()
{
  return "eufs_msgs::msg::CarState";
}

template<>
inline const char * name<eufs_msgs::msg::CarState>()
{
  return "eufs_msgs/msg/CarState";
}

template<>
struct has_fixed_size<eufs_msgs::msg::CarState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::CarState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::CarState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
