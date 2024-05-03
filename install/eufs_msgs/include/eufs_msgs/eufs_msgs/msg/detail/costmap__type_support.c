// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/msg/detail/costmap__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/msg/detail/costmap__functions.h"
#include "eufs_msgs/msg/detail/costmap__struct.h"


// Include directives for member types
// Member `channel0`
// Member `channel1`
// Member `channel2`
// Member `channel3`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__msg__Costmap__init(message_memory);
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_fini_function(void * message_memory)
{
  eufs_msgs__msg__Costmap__fini(message_memory);
}

size_t eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel0(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel0(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel0(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel0(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel0(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel0(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel1(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel2(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel3(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel3(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel3(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel3(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel3(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel3(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_member_array[9] = {
  {
    "x_bounds_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, x_bounds_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_bounds_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, x_bounds_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_bounds_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, y_bounds_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_bounds_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, y_bounds_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixels_per_meter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, pixels_per_meter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, channel0),  // bytes offset in struct
    NULL,  // default value
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel0,  // size() function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel0,  // get_const(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel0,  // get(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel0,  // fetch(index, &value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel0,  // assign(index, value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel0  // resize(index) function pointer
  },
  {
    "channel1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, channel1),  // bytes offset in struct
    NULL,  // default value
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel1,  // size() function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel1,  // get_const(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel1,  // get(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel1,  // fetch(index, &value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel1,  // assign(index, value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel1  // resize(index) function pointer
  },
  {
    "channel2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, channel2),  // bytes offset in struct
    NULL,  // default value
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel2,  // size() function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel2,  // get_const(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel2,  // get(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel2,  // fetch(index, &value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel2,  // assign(index, value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel2  // resize(index) function pointer
  },
  {
    "channel3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__Costmap, channel3),  // bytes offset in struct
    NULL,  // default value
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__size_function__Costmap__channel3,  // size() function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_const_function__Costmap__channel3,  // get_const(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__get_function__Costmap__channel3,  // get(index) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__fetch_function__Costmap__channel3,  // fetch(index, &value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__assign_function__Costmap__channel3,  // assign(index, value) function pointer
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__resize_function__Costmap__channel3  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_members = {
  "eufs_msgs__msg",  // message namespace
  "Costmap",  // message name
  9,  // number of fields
  sizeof(eufs_msgs__msg__Costmap),
  eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_member_array,  // message members
  eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_init_function,  // function to initialize message memory (memory has to be allocated)
  eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle = {
  0,
  &eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, Costmap)() {
  if (!eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle.typesupport_identifier) {
    eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eufs_msgs__msg__Costmap__rosidl_typesupport_introspection_c__Costmap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
