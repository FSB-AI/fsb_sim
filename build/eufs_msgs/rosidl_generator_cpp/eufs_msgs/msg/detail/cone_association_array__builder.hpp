// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/cone_association_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeAssociationArray_unmatched
{
public:
  explicit Init_ConeAssociationArray_unmatched(::eufs_msgs::msg::ConeAssociationArray & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ConeAssociationArray unmatched(::eufs_msgs::msg::ConeAssociationArray::_unmatched_type arg)
  {
    msg_.unmatched = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociationArray msg_;
};

class Init_ConeAssociationArray_matched
{
public:
  explicit Init_ConeAssociationArray_matched(::eufs_msgs::msg::ConeAssociationArray & msg)
  : msg_(msg)
  {}
  Init_ConeAssociationArray_unmatched matched(::eufs_msgs::msg::ConeAssociationArray::_matched_type arg)
  {
    msg_.matched = std::move(arg);
    return Init_ConeAssociationArray_unmatched(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociationArray msg_;
};

class Init_ConeAssociationArray_threshold
{
public:
  explicit Init_ConeAssociationArray_threshold(::eufs_msgs::msg::ConeAssociationArray & msg)
  : msg_(msg)
  {}
  Init_ConeAssociationArray_matched threshold(::eufs_msgs::msg::ConeAssociationArray::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return Init_ConeAssociationArray_matched(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociationArray msg_;
};

class Init_ConeAssociationArray_type
{
public:
  Init_ConeAssociationArray_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeAssociationArray_threshold type(::eufs_msgs::msg::ConeAssociationArray::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ConeAssociationArray_threshold(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociationArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ConeAssociationArray>()
{
  return eufs_msgs::msg::builder::Init_ConeAssociationArray_type();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__BUILDER_HPP_
