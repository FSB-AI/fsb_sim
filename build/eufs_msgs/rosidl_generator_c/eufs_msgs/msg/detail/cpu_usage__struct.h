// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'all'
// Member 'cpus'
#include "eufs_msgs/msg/detail/cpu_status__struct.h"

/// Struct defined in msg/CpuUsage in the package eufs_msgs.
typedef struct eufs_msgs__msg__CpuUsage
{
  builtin_interfaces__msg__Time stamp;
  eufs_msgs__msg__CpuStatus all;
  eufs_msgs__msg__CpuStatus__Sequence cpus;
} eufs_msgs__msg__CpuUsage;

// Struct for a sequence of eufs_msgs__msg__CpuUsage.
typedef struct eufs_msgs__msg__CpuUsage__Sequence
{
  eufs_msgs__msg__CpuUsage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__CpuUsage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CPU_USAGE__STRUCT_H_
