// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from eufs_msgs:msg/ParticleSLAM.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "eufs_msgs/msg/detail/particle_slam__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace eufs_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ParticleSLAM_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) eufs_msgs::msg::ParticleSLAM(_init);
}

void ParticleSLAM_fini_function(void * message_memory)
{
  auto typed_message = static_cast<eufs_msgs::msg::ParticleSLAM *>(message_memory);
  typed_message->~ParticleSLAM();
}

size_t size_function__ParticleSLAM__particles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<eufs_msgs::msg::Particle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ParticleSLAM__particles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<eufs_msgs::msg::Particle> *>(untyped_member);
  return &member[index];
}

void * get_function__ParticleSLAM__particles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<eufs_msgs::msg::Particle> *>(untyped_member);
  return &member[index];
}

void fetch_function__ParticleSLAM__particles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const eufs_msgs::msg::Particle *>(
    get_const_function__ParticleSLAM__particles(untyped_member, index));
  auto & value = *reinterpret_cast<eufs_msgs::msg::Particle *>(untyped_value);
  value = item;
}

void assign_function__ParticleSLAM__particles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<eufs_msgs::msg::Particle *>(
    get_function__ParticleSLAM__particles(untyped_member, index));
  const auto & value = *reinterpret_cast<const eufs_msgs::msg::Particle *>(untyped_value);
  item = value;
}

void resize_function__ParticleSLAM__particles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<eufs_msgs::msg::Particle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ParticleSLAM_message_member_array[2] = {
  {
    "best_particle_idx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ParticleSLAM, best_particle_idx),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "particles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<eufs_msgs::msg::Particle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ParticleSLAM, particles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ParticleSLAM__particles,  // size() function pointer
    get_const_function__ParticleSLAM__particles,  // get_const(index) function pointer
    get_function__ParticleSLAM__particles,  // get(index) function pointer
    fetch_function__ParticleSLAM__particles,  // fetch(index, &value) function pointer
    assign_function__ParticleSLAM__particles,  // assign(index, value) function pointer
    resize_function__ParticleSLAM__particles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ParticleSLAM_message_members = {
  "eufs_msgs::msg",  // message namespace
  "ParticleSLAM",  // message name
  2,  // number of fields
  sizeof(eufs_msgs::msg::ParticleSLAM),
  ParticleSLAM_message_member_array,  // message members
  ParticleSLAM_init_function,  // function to initialize message memory (memory has to be allocated)
  ParticleSLAM_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ParticleSLAM_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ParticleSLAM_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace eufs_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<eufs_msgs::msg::ParticleSLAM>()
{
  return &::eufs_msgs::msg::rosidl_typesupport_introspection_cpp::ParticleSLAM_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, eufs_msgs, msg, ParticleSLAM)() {
  return &::eufs_msgs::msg::rosidl_typesupport_introspection_cpp::ParticleSLAM_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
