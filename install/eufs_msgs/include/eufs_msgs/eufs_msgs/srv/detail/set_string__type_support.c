// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from eufs_msgs:srv/SetString.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "eufs_msgs/srv/detail/set_string__rosidl_typesupport_introspection_c.h"
#include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "eufs_msgs/srv/detail/set_string__functions.h"
#include "eufs_msgs/srv/detail/set_string__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__srv__SetString_Request__init(message_memory);
}

void eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_fini_function(void * message_memory)
{
  eufs_msgs__srv__SetString_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__srv__SetString_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_members = {
  "eufs_msgs__srv",  // message namespace
  "SetString_Request",  // message name
  1,  // number of fields
  sizeof(eufs_msgs__srv__SetString_Request),
  eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_member_array,  // message members
  eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_type_support_handle = {
  0,
  &eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString_Request)() {
  if (!eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_type_support_handle.typesupport_identifier) {
    eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eufs_msgs__srv__SetString_Request__rosidl_typesupport_introspection_c__SetString_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "eufs_msgs/srv/detail/set_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "eufs_msgs/srv/detail/set_string__functions.h"
// already included above
// #include "eufs_msgs/srv/detail/set_string__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  eufs_msgs__srv__SetString_Response__init(message_memory);
}

void eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_fini_function(void * message_memory)
{
  eufs_msgs__srv__SetString_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__srv__SetString_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs__srv__SetString_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_members = {
  "eufs_msgs__srv",  // message namespace
  "SetString_Response",  // message name
  2,  // number of fields
  sizeof(eufs_msgs__srv__SetString_Response),
  eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_member_array,  // message members
  eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_type_support_handle = {
  0,
  &eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString_Response)() {
  if (!eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_type_support_handle.typesupport_identifier) {
    eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &eufs_msgs__srv__SetString_Response__rosidl_typesupport_introspection_c__SetString_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "eufs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "eufs_msgs/srv/detail/set_string__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_members = {
  "eufs_msgs__srv",  // service namespace
  "SetString",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_Request_message_type_support_handle,
  NULL  // response message
  // eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_Response_message_type_support_handle
};

static rosidl_service_type_support_t eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_type_support_handle = {
  0,
  &eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_eufs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString)() {
  if (!eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_type_support_handle.typesupport_identifier) {
    eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, eufs_msgs, srv, SetString_Response)()->data;
  }

  return &eufs_msgs__srv__detail__set_string__rosidl_typesupport_introspection_c__SetString_service_type_support_handle;
}
