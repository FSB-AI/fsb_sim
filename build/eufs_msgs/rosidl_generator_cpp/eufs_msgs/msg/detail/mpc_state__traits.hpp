// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/MPCState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__MPC_STATE__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__MPC_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/mpc_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MPCState & msg,
  std::ostream & out)
{
  out << "{";
  // member: exitflag
  {
    out << "exitflag: ";
    rosidl_generator_traits::value_to_yaml(msg.exitflag, out);
    out << ", ";
  }

  // member: iterations
  {
    out << "iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations, out);
    out << ", ";
  }

  // member: solve_time
  {
    out << "solve_time: ";
    rosidl_generator_traits::value_to_yaml(msg.solve_time, out);
    out << ", ";
  }

  // member: cost
  {
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MPCState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exitflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exitflag: ";
    rosidl_generator_traits::value_to_yaml(msg.exitflag, out);
    out << "\n";
  }

  // member: iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.iterations, out);
    out << "\n";
  }

  // member: solve_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solve_time: ";
    rosidl_generator_traits::value_to_yaml(msg.solve_time, out);
    out << "\n";
  }

  // member: cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cost: ";
    rosidl_generator_traits::value_to_yaml(msg.cost, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MPCState & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::MPCState & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::MPCState & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::MPCState>()
{
  return "eufs_msgs::msg::MPCState";
}

template<>
inline const char * name<eufs_msgs::msg::MPCState>()
{
  return "eufs_msgs/msg/MPCState";
}

template<>
struct has_fixed_size<eufs_msgs::msg::MPCState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::msg::MPCState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::msg::MPCState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__MPC_STATE__TRAITS_HPP_
