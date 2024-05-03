// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/OSS.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__OSS__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__OSS__STRUCT_H_

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

/// Struct defined in msg/OSS in the package eufs_msgs.
/**
  * Measurements from the ground speed sensor
 */
typedef struct eufs_msgs__msg__OSS
{
  std_msgs__msg__Header header;
  float velocity;
  /// velocity in X-axis
  float v_x;
  /// velocity in Y-axis
  float v_y;
  float yaw_rate;
} eufs_msgs__msg__OSS;

// Struct for a sequence of eufs_msgs__msg__OSS.
typedef struct eufs_msgs__msg__OSS__Sequence
{
  eufs_msgs__msg__OSS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__OSS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__OSS__STRUCT_H_
