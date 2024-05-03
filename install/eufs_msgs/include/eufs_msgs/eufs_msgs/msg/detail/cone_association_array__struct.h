// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'matched'
#include "eufs_msgs/msg/detail/cone_association__struct.h"
// Member 'unmatched'
#include "eufs_msgs/msg/detail/cone_with_covariance__struct.h"

/// Struct defined in msg/ConeAssociationArray in the package eufs_msgs.
/**
  * Represents a set of cone associations
 */
typedef struct eufs_msgs__msg__ConeAssociationArray
{
  /// Metadata relating to association type
  /// Association type
  rosidl_runtime_c__String type;
  double threshold;
  /// Information relating to matched cones
  eufs_msgs__msg__ConeAssociation__Sequence matched;
  /// Information relating to unmatched cones
  eufs_msgs__msg__ConeWithCovariance__Sequence unmatched;
} eufs_msgs__msg__ConeAssociationArray;

// Struct for a sequence of eufs_msgs__msg__ConeAssociationArray.
typedef struct eufs_msgs__msg__ConeAssociationArray__Sequence
{
  eufs_msgs__msg__ConeAssociationArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ConeAssociationArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY__STRUCT_H_
