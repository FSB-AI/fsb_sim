// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ParticleSLAM.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'particles'
#include "eufs_msgs/msg/detail/particle__struct.h"

/// Struct defined in msg/ParticleSLAM in the package eufs_msgs.
/**
  * Represents the state of a particle-based SLAM algorithm
 */
typedef struct eufs_msgs__msg__ParticleSLAM
{
  /// The index position current best guess of the SLAM algorithm in `particles`
  uint64_t best_particle_idx;
  /// The set of particles of the SLAM algorithm
  eufs_msgs__msg__Particle__Sequence particles;
} eufs_msgs__msg__ParticleSLAM;

// Struct for a sequence of eufs_msgs__msg__ParticleSLAM.
typedef struct eufs_msgs__msg__ParticleSLAM__Sequence
{
  eufs_msgs__msg__ParticleSLAM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ParticleSLAM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__PARTICLE_SLAM__STRUCT_H_
