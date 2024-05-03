// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/ConeAssociationArrayStamped.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__STRUCT_H_

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
// Member 'associations'
#include "eufs_msgs/msg/detail/cone_association_array__struct.h"

/// Struct defined in msg/ConeAssociationArrayStamped in the package eufs_msgs.
/**
  * Represents a set of cone associations
 */
typedef struct eufs_msgs__msg__ConeAssociationArrayStamped
{
  std_msgs__msg__Header header;
  eufs_msgs__msg__ConeAssociationArray associations;
} eufs_msgs__msg__ConeAssociationArrayStamped;

// Struct for a sequence of eufs_msgs__msg__ConeAssociationArrayStamped.
typedef struct eufs_msgs__msg__ConeAssociationArrayStamped__Sequence
{
  eufs_msgs__msg__ConeAssociationArrayStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__ConeAssociationArrayStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CONE_ASSOCIATION_ARRAY_STAMPED__STRUCT_H_
