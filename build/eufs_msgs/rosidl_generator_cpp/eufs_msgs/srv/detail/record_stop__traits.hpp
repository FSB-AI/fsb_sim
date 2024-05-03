// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:srv/RecordStop.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_STOP__TRAITS_HPP_
#define EUFS_MSGS__SRV__DETAIL__RECORD_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/srv/detail/record_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordStop_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordStop_Request & msg, bool use_flow_style = false)
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
  const eufs_msgs::srv::RecordStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::srv::RecordStop_Request & msg)
{
  return eufs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::srv::RecordStop_Request>()
{
  return "eufs_msgs::srv::RecordStop_Request";
}

template<>
inline const char * name<eufs_msgs::srv::RecordStop_Request>()
{
  return "eufs_msgs/srv/RecordStop_Request";
}

template<>
struct has_fixed_size<eufs_msgs::srv::RecordStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::srv::RecordStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::srv::RecordStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace eufs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RecordStop_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop_recording
  {
    out << "stop_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_recording, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RecordStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_recording, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RecordStop_Response & msg, bool use_flow_style = false)
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
  const eufs_msgs::srv::RecordStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::srv::RecordStop_Response & msg)
{
  return eufs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::srv::RecordStop_Response>()
{
  return "eufs_msgs::srv::RecordStop_Response";
}

template<>
inline const char * name<eufs_msgs::srv::RecordStop_Response>()
{
  return "eufs_msgs/srv/RecordStop_Response";
}

template<>
struct has_fixed_size<eufs_msgs::srv::RecordStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<eufs_msgs::srv::RecordStop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<eufs_msgs::srv::RecordStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<eufs_msgs::srv::RecordStop>()
{
  return "eufs_msgs::srv::RecordStop";
}

template<>
inline const char * name<eufs_msgs::srv::RecordStop>()
{
  return "eufs_msgs/srv/RecordStop";
}

template<>
struct has_fixed_size<eufs_msgs::srv::RecordStop>
  : std::integral_constant<
    bool,
    has_fixed_size<eufs_msgs::srv::RecordStop_Request>::value &&
    has_fixed_size<eufs_msgs::srv::RecordStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<eufs_msgs::srv::RecordStop>
  : std::integral_constant<
    bool,
    has_bounded_size<eufs_msgs::srv::RecordStop_Request>::value &&
    has_bounded_size<eufs_msgs::srv::RecordStop_Response>::value
  >
{
};

template<>
struct is_service<eufs_msgs::srv::RecordStop>
  : std::true_type
{
};

template<>
struct is_service_request<eufs_msgs::srv::RecordStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<eufs_msgs::srv::RecordStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_STOP__TRAITS_HPP_
