// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:srv/RecordStop.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_STOP__STRUCT_H_
#define EUFS_MSGS__SRV__DETAIL__RECORD_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RecordStop in the package eufs_msgs.
typedef struct eufs_msgs__srv__RecordStop_Request
{
  uint8_t structure_needs_at_least_one_member;
} eufs_msgs__srv__RecordStop_Request;

// Struct for a sequence of eufs_msgs__srv__RecordStop_Request.
typedef struct eufs_msgs__srv__RecordStop_Request__Sequence
{
  eufs_msgs__srv__RecordStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__srv__RecordStop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RecordStop in the package eufs_msgs.
typedef struct eufs_msgs__srv__RecordStop_Response
{
  bool stop_recording;
} eufs_msgs__srv__RecordStop_Response;

// Struct for a sequence of eufs_msgs__srv__RecordStop_Response.
typedef struct eufs_msgs__srv__RecordStop_Response__Sequence
{
  eufs_msgs__srv__RecordStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__srv__RecordStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_STOP__STRUCT_H_
