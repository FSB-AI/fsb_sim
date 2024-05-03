// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from eufs_msgs:srv/RecordStart.idl
// generated code does not contain a copyright notice

#ifndef EUFS_MSGS__SRV__DETAIL__RECORD_START__STRUCT_H_
#define EUFS_MSGS__SRV__DETAIL__RECORD_START__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RecordStart in the package eufs_msgs.
typedef struct eufs_msgs__srv__RecordStart_Request
{
  int64_t pack_number;
} eufs_msgs__srv__RecordStart_Request;

// Struct for a sequence of eufs_msgs__srv__RecordStart_Request.
typedef struct eufs_msgs__srv__RecordStart_Request__Sequence
{
  eufs_msgs__srv__RecordStart_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__srv__RecordStart_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RecordStart in the package eufs_msgs.
typedef struct eufs_msgs__srv__RecordStart_Response
{
  bool start_recording;
} eufs_msgs__srv__RecordStart_Response;

// Struct for a sequence of eufs_msgs__srv__RecordStart_Response.
typedef struct eufs_msgs__srv__RecordStart_Response__Sequence
{
  eufs_msgs__srv__RecordStart_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} eufs_msgs__srv__RecordStart_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EUFS_MSGS__SRV__DETAIL__RECORD_START__STRUCT_H_
