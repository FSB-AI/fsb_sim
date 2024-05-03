// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:srv/GetMap.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_
#define EUFS_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/srv/detail/get_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::srv::GetMap_Request>()
{
  return ::eufs_msgs::srv::GetMap_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace eufs_msgs


namespace eufs_msgs
{

namespace srv
{

namespace builder
{

class Init_GetMap_Response_map_path
{
public:
  Init_GetMap_Response_map_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::eufs_msgs::srv::GetMap_Response map_path(::eufs_msgs::srv::GetMap_Response::_map_path_type arg)
  {
    msg_.map_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::srv::GetMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::srv::GetMap_Response>()
{
  return eufs_msgs::srv::builder::Init_GetMap_Response_map_path();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__SRV__DETAIL__GET_MAP__BUILDER_HPP_
