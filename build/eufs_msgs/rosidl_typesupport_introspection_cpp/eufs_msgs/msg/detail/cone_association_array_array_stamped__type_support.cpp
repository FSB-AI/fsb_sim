// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from eufs_msgs:msg/ConeAssociationArrayArrayStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "eufs_msgs/msg/detail/cone_association_array_array_stamped__struct.hpp"
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

void ConeAssociationArrayArrayStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) eufs_msgs::msg::ConeAssociationArrayArrayStamped(_init);
}

void ConeAssociationArrayArrayStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<eufs_msgs::msg::ConeAssociationArrayArrayStamped *>(message_memory);
  typed_message->~ConeAssociationArrayArrayStamped();
}

size_t size_function__ConeAssociationArrayArrayStamped__associations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<eufs_msgs::msg::ConeAssociationArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConeAssociationArrayArrayStamped__associations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<eufs_msgs::msg::ConeAssociationArray> *>(untyped_member);
  return &member[index];
}

void * get_function__ConeAssociationArrayArrayStamped__associations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<eufs_msgs::msg::ConeAssociationArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConeAssociationArrayArrayStamped__associations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const eufs_msgs::msg::ConeAssociationArray *>(
    get_const_function__ConeAssociationArrayArrayStamped__associations(untyped_member, index));
  auto & value = *reinterpret_cast<eufs_msgs::msg::ConeAssociationArray *>(untyped_value);
  value = item;
}

void assign_function__ConeAssociationArrayArrayStamped__associations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<eufs_msgs::msg::ConeAssociationArray *>(
    get_function__ConeAssociationArrayArrayStamped__associations(untyped_member, index));
  const auto & value = *reinterpret_cast<const eufs_msgs::msg::ConeAssociationArray *>(untyped_value);
  item = value;
}

void resize_function__ConeAssociationArrayArrayStamped__associations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<eufs_msgs::msg::ConeAssociationArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConeAssociationArrayArrayStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ConeAssociationArrayArrayStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "associations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<eufs_msgs::msg::ConeAssociationArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ConeAssociationArrayArrayStamped, associations),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConeAssociationArrayArrayStamped__associations,  // size() function pointer
    get_const_function__ConeAssociationArrayArrayStamped__associations,  // get_const(index) function pointer
    get_function__ConeAssociationArrayArrayStamped__associations,  // get(index) function pointer
    fetch_function__ConeAssociationArrayArrayStamped__associations,  // fetch(index, &value) function pointer
    assign_function__ConeAssociationArrayArrayStamped__associations,  // assign(index, value) function pointer
    resize_function__ConeAssociationArrayArrayStamped__associations  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConeAssociationArrayArrayStamped_message_members = {
  "eufs_msgs::msg",  // message namespace
  "ConeAssociationArrayArrayStamped",  // message name
  2,  // number of fields
  sizeof(eufs_msgs::msg::ConeAssociationArrayArrayStamped),
  ConeAssociationArrayArrayStamped_message_member_array,  // message members
  ConeAssociationArrayArrayStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  ConeAssociationArrayArrayStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConeAssociationArrayArrayStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConeAssociationArrayArrayStamped_message_members,
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
get_message_type_support_handle<eufs_msgs::msg::ConeAssociationArrayArrayStamped>()
{
  return &::eufs_msgs::msg::rosidl_typesupport_introspection_cpp::ConeAssociationArrayArrayStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, eufs_msgs, msg, ConeAssociationArrayArrayStamped)() {
  return &::eufs_msgs::msg::rosidl_typesupport_introspection_cpp::ConeAssociationArrayArrayStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
