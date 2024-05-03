// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__COSTMAP__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__COSTMAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/costmap__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Costmap & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_bounds_min
  {
    out << "x_bounds_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_bounds_min, out);
    out << ", ";
  }

  // member: x_bounds_max
  {
    out << "x_bounds_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_bounds_max, out);
    out << ", ";
  }

  // member: y_bounds_min
  {
    out << "y_bounds_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_bounds_min, out);
    out << ", ";
  }

  // member: y_bounds_max
  {
    out << "y_bounds_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_bounds_max, out);
    out << ", ";
  }

  // member: pixels_per_meter
  {
    out << "pixels_per_meter: ";
    rosidl_generator_traits::value_to_yaml(msg.pixels_per_meter, out);
    out << ", ";
  }

  // member: channel0
  {
    if (msg.channel0.size() == 0) {
      out << "channel0: []";
    } else {
      out << "channel0: [";
      size_t pending_items = msg.channel0.size();
      for (auto item : msg.channel0) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channel1
  {
    if (msg.channel1.size() == 0) {
      out << "channel1: []";
    } else {
      out << "channel1: [";
      size_t pending_items = msg.channel1.size();
      for (auto item : msg.channel1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channel2
  {
    if (msg.channel2.size() == 0) {
      out << "channel2: []";
    } else {
      out << "channel2: [";
      size_t pending_items = msg.channel2.size();
      for (auto item : msg.channel2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channel3
  {
    if (msg.channel3.size() == 0) {
      out << "channel3: []";
    } else {
      out << "channel3: [";
      size_t pending_items = msg.channel3.size();
      for (auto item : msg.channel3) {
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
  const Costmap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_bounds_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_bounds_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_bounds_min, out);
    out << "\n";
  }

  // member: x_bounds_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_bounds_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_bounds_max, out);
    out << "\n";
  }

  // member: y_bounds_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_bounds_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_bounds_min, out);
    out << "\n";
  }

  // member: y_bounds_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_bounds_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_bounds_max, out);
    out << "\n";
  }

  // member: pixels_per_meter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixels_per_meter: ";
    rosidl_generator_traits::value_to_yaml(msg.pixels_per_meter, out);
    out << "\n";
  }

  // member: channel0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel0.size() == 0) {
      out << "channel0: []\n";
    } else {
      out << "channel0:\n";
      for (auto item : msg.channel0) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: channel1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel1.size() == 0) {
      out << "channel1: []\n";
    } else {
      out << "channel1:\n";
      for (auto item : msg.channel1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: channel2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel2.size() == 0) {
      out << "channel2: []\n";
    } else {
      out << "channel2:\n";
      for (auto item : msg.channel2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: channel3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel3.size() == 0) {
      out << "channel3: []\n";
    } else {
      out << "channel3:\n";
      for (auto item : msg.channel3) {
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

inline std::string to_yaml(const Costmap & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::Costmap & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::Costmap & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::Costmap>()
{
  return "eufs_msgs::msg::Costmap";
}

template<>
inline const char * name<eufs_msgs::msg::Costmap>()
{
  return "eufs_msgs/msg/Costmap";
}

template<>
struct has_fixed_size<eufs_msgs::msg::Costmap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::Costmap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::Costmap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__COSTMAP__TRAITS_HPP_
