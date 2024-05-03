// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/EKFState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__EKF_STATE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__EKF_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/ekf_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EKFState & msg,
  std::ostream & out)
{
  out << "{";
  // member: gps_received
  {
    out << "gps_received: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_received, out);
    out << ", ";
  }

  // member: imu_received
  {
    out << "imu_received: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_received, out);
    out << ", ";
  }

  // member: wheel_odom_received
  {
    out << "wheel_odom_received: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_odom_received, out);
    out << ", ";
  }

  // member: ekf_odom_received
  {
    out << "ekf_odom_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ekf_odom_received, out);
    out << ", ";
  }

  // member: ekf_accel_received
  {
    out << "ekf_accel_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ekf_accel_received, out);
    out << ", ";
  }

  // member: currently_over_covariance_limit
  {
    out << "currently_over_covariance_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.currently_over_covariance_limit, out);
    out << ", ";
  }

  // member: consecutive_turns_over_covariance_limit
  {
    out << "consecutive_turns_over_covariance_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.consecutive_turns_over_covariance_limit, out);
    out << ", ";
  }

  // member: recommends_failure
  {
    out << "recommends_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.recommends_failure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EKFState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gps_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_received: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_received, out);
    out << "\n";
  }

  // member: imu_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_received: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_received, out);
    out << "\n";
  }

  // member: wheel_odom_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_odom_received: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_odom_received, out);
    out << "\n";
  }

  // member: ekf_odom_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ekf_odom_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ekf_odom_received, out);
    out << "\n";
  }

  // member: ekf_accel_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ekf_accel_received: ";
    rosidl_generator_traits::value_to_yaml(msg.ekf_accel_received, out);
    out << "\n";
  }

  // member: currently_over_covariance_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currently_over_covariance_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.currently_over_covariance_limit, out);
    out << "\n";
  }

  // member: consecutive_turns_over_covariance_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consecutive_turns_over_covariance_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.consecutive_turns_over_covariance_limit, out);
    out << "\n";
  }

  // member: recommends_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recommends_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.recommends_failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EKFState & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::EKFState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::EKFState & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::EKFState>()
{
  return "eufs_msgs::msg::EKFState";
}

template<>
inline const char * name<eufs_msgs::msg::EKFState>()
{
  return "eufs_msgs/msg/EKFState";
}

template<>
struct has_fixed_size<eufs_msgs::msg::EKFState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::msg::EKFState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::msg::EKFState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__EKF_STATE__TRAITS_HPP_
