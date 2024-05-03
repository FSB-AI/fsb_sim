// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:msg/CpuStatus.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__MSG__DETAIL__CPU_STATUS__STRUCT_H_
#define EUFS_MSGS__MSG__DETAIL__CPU_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  eufs_msgs__msg__CpuStatus__OK = 0
};

/// Constant 'HIGH_LOAD'.
enum
{
  eufs_msgs__msg__CpuStatus__HIGH_LOAD = 1
};

/// Constant 'VERY_HIGH_LOAD'.
enum
{
  eufs_msgs__msg__CpuStatus__VERY_HIGH_LOAD = 2
};

/// Constant 'STALE'.
enum
{
  eufs_msgs__msg__CpuStatus__STALE = 3
};

/// Struct defined in msg/CpuStatus in the package eufs_msgs.
/**
  * constants
 */
typedef struct eufs_msgs__msg__CpuStatus
{
  /// fields
  uint8_t status;
  float total;
  float usr;
  float nice;
  float sys;
  float idle;
} eufs_msgs__msg__CpuStatus;

// Struct for a sequence of eufs_msgs__msg__CpuStatus.
typedef struct eufs_msgs__msg__CpuStatus__Sequence
{
  eufs_msgs__msg__CpuStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__msg__CpuStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__MSG__DETAIL__CPU_STATUS__STRUCT_H_
