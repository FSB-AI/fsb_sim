// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from eufs_msgs:msg/StereoImage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__BUILDER_HPP_
#define EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "eufs_msgs/msg/detail/stereo_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace eufs_msgs
{

namespace msg
{

namespace builder
{

class Init_StereoImage_depth
{
public:
  explicit Init_StereoImage_depth(::eufs_msgs::msg::StereoImage & msg)
  : msg_(msg)
  {}
  ::eufs_msgs::msg::StereoImage depth(::eufs_msgs::msg::StereoImage::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::eufs_msgs::msg::StereoImage msg_;
};

class Init_StereoImage_color
{
public:
  explicit Init_StereoImage_color(::eufs_msgs::msg::StereoImage & msg)
  : msg_(msg)
  {}
  Init_StereoImage_depth color(::eufs_msgs::msg::StereoImage::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_StereoImage_depth(msg_);
  }

private:
  ::eufs_msgs::msg::StereoImage msg_;
};

class Init_StereoImage_header
{
public:
  Init_StereoImage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StereoImage_color header(::eufs_msgs::msg::StereoImage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StereoImage_color(msg_);
  }

private:
  ::eufs_msgs::msg::StereoImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::eufs_msgs::msg::StereoImage>()
{
  return eufs_msgs::msg::builder::Init_StereoImage_header();
}

}  // namespace eufs_msgs

#endif  // EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__BUILDER_HPP_
