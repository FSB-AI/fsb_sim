// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/StereoImage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'color'
// Member 'depth'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/StereoImage in the package eufs_msgs.
typedef struct eufs_msgs__msg__StereoImage
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image color;
  sensor_msgs__msg__Image depth;
} eufs_msgs__msg__StereoImage;

// Struct for a sequence of eufs_msgs__msg__StereoImage.
typedef struct eufs_msgs__msg__StereoImage__Sequence
{
  eufs_msgs__msg__StereoImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__StereoImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__STEREO_IMAGE__STRUCT_H_
