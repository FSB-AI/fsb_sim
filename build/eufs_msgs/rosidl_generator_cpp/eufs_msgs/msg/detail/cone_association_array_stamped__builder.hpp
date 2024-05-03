// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/ConeAssociationArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/cone_association_array_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeAssociationArrayStamped_associations
{
public:
  explicit Init_ConeAssociationArrayStamped_associations(::eufs_msgs::msg::ConeAssociationArrayStamped & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::ConeAssociationArrayStamped associations(::eufs_msgs::msg::ConeAssociationArrayStamped::_associations_type arg)
  {
    msg_.associations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociationArrayStamped msg_;
};

class Init_ConeAssociationArrayStamped_header
{
public:
  Init_ConeAssociationArrayStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeAssociationArrayStamped_associations header(::eufs_msgs::msg::ConeAssociationArrayStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConeAssociationArrayStamped_associations(msg_);
  }

private:
  ::eufs_msgs::msg::ConeAssociationArrayStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::ConeAssociationArrayStamped>()
{
  return eufs_msgs::msg::builder::Init_ConeAssociationArrayStamped_header();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__BUILDER_HPP_
