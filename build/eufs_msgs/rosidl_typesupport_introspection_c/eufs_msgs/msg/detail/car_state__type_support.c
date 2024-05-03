// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/msg/detail/car_state__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/msg/detail/car_state__functions.h"
#include "eufs_msgs/msg/detail/car_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist_with_covariance.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__rosidl_typesupport_introspection_c.h"
// Member `linear_acceleration`
#include "geometry_msgs/msg/vector3.h"
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__msg__CarState__init(message_memory);
}

void eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_fini_function(void * message_memory)
{
  eufs_msgs__msg__CarState__fini(message_memory);
}

size_t eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__size_function__CarState__linear_acceleration_covariance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__get_const_function__CarState__linear_acceleration_covariance(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__get_function__CarState__linear_acceleration_covariance(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__fetch_function__CarState__linear_acceleration_covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__get_const_function__CarState__linear_acceleration_covariance(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__assign_function__CarState__linear_acceleration_covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__get_function__CarState__linear_acceleration_covariance(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, child_frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, linear_acceleration_covariance),  // bytes offset in struct
    NULL,  // default value
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__size_function__CarState__linear_acceleration_covariance,  // size() function pointer
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__get_const_function__CarState__linear_acceleration_covariance,  // get_const(index) function pointer
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__get_function__CarState__linear_acceleration_covariance,  // get(index) function pointer
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__fetch_function__CarState__linear_acceleration_covariance,  // fetch(index, &value) function pointer
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__assign_function__CarState__linear_acceleration_covariance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slip_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, slip_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_of_charge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__msg__CarState, state_of_charge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_members = {
  "eufs_msgs__msg",  // message namespace
  "CarState",  // message name
  8,  // number of fields
  sizeof(eufs_msgs__msg__CarState),
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_member_array,  // message members
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_init_function,  // function to initialize message memory (memory has to be allocated)
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle = {
  0,
  &eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, msg, CarState)() {
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TwistWithCovariance)();
  eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle.typesupport_identifier) {
    eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eufs_msgs__msg__CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
