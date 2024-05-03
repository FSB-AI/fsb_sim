// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ConeAssociation.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/cone_association__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeAssociation_second
{
public:
  explicit Init_ConeAssociation_second(::eufs_msgs::msg::ConeAssociation & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ConeAssociation second(::eufs_msgs::msg::ConeAssociation::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociation msg_;
};

class Init_ConeAssociation_first
{
public:
  Init_ConeAssociation_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeAssociation_second first(::eufs_msgs::msg::ConeAssociation::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_ConeAssociation_second(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ConeAssociation>()
{
  return eufs_msgs::msg::builder::Init_ConeAssociation_first();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__BUILDER_HPP_
