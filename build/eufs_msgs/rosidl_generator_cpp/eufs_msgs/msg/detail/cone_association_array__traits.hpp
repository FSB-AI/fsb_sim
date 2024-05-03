// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__TRAITS_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "eufs_msgs/msg/detail/cone_association_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'matched'
#include "eufs_msgs/msg/detail/cone_association__traits.hpp"
// Member 'unmatched'
#include "eufs_msgs/msg/detail/cone_with_covariance__traits.hpp"

namespace eufs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConeAssociationArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << ", ";
  }

  // member: matched
  {
    if (msg.matched.size() == 0) {
      out << "matched: []";
    } else {
      out << "matched: [";
      size_t pending_items = msg.matched.size();
      for (auto item : msg.matched) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: unmatched
  {
    if (msg.unmatched.size() == 0) {
      out << "unmatched: []";
    } else {
      out << "unmatched: [";
      size_t pending_items = msg.unmatched.size();
      for (auto item : msg.unmatched) {
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
  const ConeAssociationArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }

  // member: matched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.matched.size() == 0) {
      out << "matched: []\n";
    } else {
      out << "matched:\n";
      for (auto item : msg.matched) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: unmatched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.unmatched.size() == 0) {
      out << "unmatched: []\n";
    } else {
      out << "unmatched:\n";
      for (auto item : msg.unmatched) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConeAssociationArray & msg, bool use_flow_style = false)
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
  const eufs_msgs::msg::ConeAssociationArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  eufs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use eufs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const eufs_msgs::msg::ConeAssociationArray & msg)
{
  return eufs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<eufs_msgs::msg::ConeAssociationArray>()
{
  return "eufs_msgs::msg::ConeAssociationArray";
}

template<>
inline const char * name<eufs_msgs::msg::ConeAssociationArray>()
{
  return "eufs_msgs/msg/ConeAssociationArray";
}

template<>
struct has_fixed_size<eufs_msgs::msg::ConeAssociationArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<eufs_msgs::msg::ConeAssociationArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<eufs_msgs::msg::ConeAssociationArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__TRAITS_HPP_
