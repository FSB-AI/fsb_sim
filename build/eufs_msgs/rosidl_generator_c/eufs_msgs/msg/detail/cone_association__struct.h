// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ConeAssociation.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first'
// Member 'second'
#include "eufs_msgs/msg/detail/cone_with_covariance__struct.h"

/// Struct defined in msg/ConeAssociation in the package eufs_msgs.
/**
  * Represents an link between two cones in the same frame
 */
typedef struct eufs_msgs__msg__ConeAssociation
{
  /// First cone in pair
  /// Typically a cone observed by perception
  eufs_msgs__msg__ConeWithCovariance first;
  /// Second cone in pair
  /// Typically a cone in a map
  eufs_msgs__msg__ConeWithCovariance second;
} eufs_msgs__msg__ConeAssociation;

// Struct for a sequence of eufs_msgs__msg__ConeAssociation.
typedef struct eufs_msgs__msg__ConeAssociation__Sequence
{
  eufs_msgs__msg__ConeAssociation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ConeAssociation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION__STRUCT_H_
