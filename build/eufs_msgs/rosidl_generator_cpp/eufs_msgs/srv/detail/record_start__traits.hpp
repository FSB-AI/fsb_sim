// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:srv/RecordStart.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_START__TRAITS_HPP_
#define EUFS_MSGS__SRV__DETAIL__RECORD_START__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/srv/detail/record_start__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordStart_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pack_number
  {
    out << "pack_number: ";
    rosidl_generator_traits::value_to_yaml(msg.pack_number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordStart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pack_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pack_number: ";
    rosidl_generator_traits::value_to_yaml(msg.pack_number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordStart_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace eufs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use eufs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eufs_msgs::srv::RecordStart_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::srv::RecordStart_Request & msg)
{
  return eufs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::srv::RecordStart_Request>()
{
  return "eufs_msgs::srv::RecordStart_Request";
}

template<>
inline const char * name<eufs_msgs::srv::RecordStart_Request>()
{
  return "eufs_msgs/srv/RecordStart_Request";
}

template<>
struct has_fixed_size<eufs_msgs::srv::RecordStart_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::srv::RecordStart_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::srv::RecordStart_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace eufs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordStart_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_recording
  {
    out << "start_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.start_recording, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordStart_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.start_recording, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordStart_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace eufs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use eufs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const eufs_msgs::srv::RecordStart_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::srv::RecordStart_Response & msg)
{
  return eufs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::srv::RecordStart_Response>()
{
  return "eufs_msgs::srv::RecordStart_Response";
}

template<>
inline const char * name<eufs_msgs::srv::RecordStart_Response>()
{
  return "eufs_msgs/srv/RecordStart_Response";
}

template<>
struct has_fixed_size<eufs_msgs::srv::RecordStart_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::srv::RecordStart_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::srv::RecordStart_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eufs_msgs::srv::RecordStart>()
{
  return "eufs_msgs::srv::RecordStart";
}

template<>
inline const char * name<eufs_msgs::srv::RecordStart>()
{
  return "eufs_msgs/srv/RecordStart";
}

template<>
struct has_fixed_size<eufs_msgs::srv::RecordStart>
  : std::integral_constant<
    bool,
    has_fixed_size<eufs_msgs::srv::RecordStart_Request>::value &&
    has_fixed_size<eufs_msgs::srv::RecordStart_Response>::value
  >
{
};

template<>
struct has_bounded_size<eufs_msgs::srv::RecordStart>
  : std::integral_constant<
    bool,
    has_bounded_size<eufs_msgs::srv::RecordStart_Request>::value &&
    has_bounded_size<eufs_msgs::srv::RecordStart_Response>::value
  >
{
};

template<>
struct is_service<eufs_msgs::srv::RecordStart>
  : std::true_type
{
};

template<>
struct is_service_request<eufs_msgs::srv::RecordStart_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eufs_msgs::srv::RecordStart_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_START__TRAITS_HPP_
