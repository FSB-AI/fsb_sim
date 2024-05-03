// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ParticleSLAMStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__STRUCT_H_

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
// Member 'state'
#include "eufs_msgs/msg/detail/particle_slam__struct.h"

/// Struct defined in msg/ParticleSLAMStamped in the package eufs_msgs.
/**
  * ParticleSLAM with reference frame and timestamp
 */
typedef struct eufs_msgs__msg__ParticleSLAMStamped
{
  std_msgs__msg__Header header;
  eufs_msgs__msg__ParticleSLAM state;
} eufs_msgs__msg__ParticleSLAMStamped;

// Struct for a sequence of eufs_msgs__msg__ParticleSLAMStamped.
typedef struct eufs_msgs__msg__ParticleSLAMStamped__Sequence
{
  eufs_msgs__msg__ParticleSLAMStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ParticleSLAMStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM_STAMPED__STRUCT_H_
