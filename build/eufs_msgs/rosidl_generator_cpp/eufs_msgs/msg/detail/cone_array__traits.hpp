// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ARRAY__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/cone_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'blue_cones'
// Member 'yellow_cones'
// Member 'orange_cones'
// Member 'big_orange_cones'
// Member 'unknown_color_cones'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConeArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: blue_cones
  {
    if (msg.blue_cones.size() == 0) {
      out << "blue_cones: []";
    } else {
      out << "blue_cones: [";
      size_t pending_items = msg.blue_cones.size();
      for (auto item : msg.blue_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yellow_cones
  {
    if (msg.yellow_cones.size() == 0) {
      out << "yellow_cones: []";
    } else {
      out << "yellow_cones: [";
      size_t pending_items = msg.yellow_cones.size();
      for (auto item : msg.yellow_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orange_cones
  {
    if (msg.orange_cones.size() == 0) {
      out << "orange_cones: []";
    } else {
      out << "orange_cones: [";
      size_t pending_items = msg.orange_cones.size();
      for (auto item : msg.orange_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: big_orange_cones
  {
    if (msg.big_orange_cones.size() == 0) {
      out << "big_orange_cones: []";
    } else {
      out << "big_orange_cones: [";
      size_t pending_items = msg.big_orange_cones.size();
      for (auto item : msg.big_orange_cones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unknown_color_cones
  {
    if (msg.unknown_color_cones.size() == 0) {
      out << "unknown_color_cones: []";
    } else {
      out << "unknown_color_cones: [";
      size_t pending_items = msg.unknown_color_cones.size();
      for (auto item : msg.unknown_color_cones) {
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
  const ConeArray & msg,
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

  // member: blue_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blue_cones.size() == 0) {
      out << "blue_cones: []\n";
    } else {
      out << "blue_cones:\n";
      for (auto item : msg.blue_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: yellow_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yellow_cones.size() == 0) {
      out << "yellow_cones: []\n";
    } else {
      out << "yellow_cones:\n";
      for (auto item : msg.yellow_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orange_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orange_cones.size() == 0) {
      out << "orange_cones: []\n";
    } else {
      out << "orange_cones:\n";
      for (auto item : msg.orange_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: big_orange_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.big_orange_cones.size() == 0) {
      out << "big_orange_cones: []\n";
    } else {
      out << "big_orange_cones:\n";
      for (auto item : msg.big_orange_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unknown_color_cones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unknown_color_cones.size() == 0) {
      out << "unknown_color_cones: []\n";
    } else {
      out << "unknown_color_cones:\n";
      for (auto item : msg.unknown_color_cones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConeArray & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::ConeArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ConeArray & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ConeArray>()
{
  return "eufs_msgs::msg::ConeArray";
}

template<>
inline const char * name<eufs_msgs::msg::ConeArray>()
{
  return "eufs_msgs/msg/ConeArray";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConeArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConeArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ConeArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ARRAY__TRAITS_HPP_
