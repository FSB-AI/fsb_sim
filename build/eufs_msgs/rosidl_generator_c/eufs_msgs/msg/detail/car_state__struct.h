// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CAR_STATE__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CAR_STATE__STRUCT_H_

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
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/CarState in the package eufs_msgs.
/**
  * This message includes both the kinematic and the dynamic state of the vehicle
  * All values are in SI units
 */
typedef struct eufs_msgs__msg__CarState
{
  std_msgs__msg__Header header;
  /// aka frame of the car
  rosidl_runtime_c__String child_frame_id;
  /// Kinematic State (x_k) in header frame
  geometry_msgs__msg__PoseWithCovariance pose;
  /// Dynamic State (x_d) in child_frame_id
  /// m/s
  geometry_msgs__msg__TwistWithCovariance twist;
  /// m/s^2
  geometry_msgs__msg__Vector3 linear_acceleration;
  /// Row major x, y z in (m/s^2)
  double linear_acceleration_covariance[9];
  double slip_angle;
  /// Metadata
  /// in Volts (V)
  double state_of_charge;
} eufs_msgs__msg__CarState;

// Struct for a sequence of eufs_msgs__msg__CarState.
typedef struct eufs_msgs__msg__CarState__Sequence
{
  eufs_msgs__msg__CarState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__CarState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CAR_STATE__STRUCT_H_
