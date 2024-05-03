// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "eufs_msgs/msg/detail/cone_association_array__struct.hpp"
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

void ConeAssociationArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) eufs_msgs::msg::ConeAssociationArray(_init);
}

void ConeAssociationArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<eufs_msgs::msg::ConeAssociationArray *>(message_memory);
  typed_message->~ConeAssociationArray();
}

size_t size_function__ConeAssociationArray__matched(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<eufs_msgs::msg::ConeAssociation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConeAssociationArray__matched(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<eufs_msgs::msg::ConeAssociation> *>(untyped_member);
  return &member[index];
}

void * get_function__ConeAssociationArray__matched(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<eufs_msgs::msg::ConeAssociation> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConeAssociationArray__matched(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const eufs_msgs::msg::ConeAssociation *>(
    get_const_function__ConeAssociationArray__matched(untyped_member, index));
  auto & value = *reinterpret_cast<eufs_msgs::msg::ConeAssociation *>(untyped_value);
  value = item;
}

void assign_function__ConeAssociationArray__matched(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<eufs_msgs::msg::ConeAssociation *>(
    get_function__ConeAssociationArray__matched(untyped_member, index));
  const auto & value = *reinterpret_cast<const eufs_msgs::msg::ConeAssociation *>(untyped_value);
  item = value;
}

void resize_function__ConeAssociationArray__matched(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<eufs_msgs::msg::ConeAssociation> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ConeAssociationArray__unmatched(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<eufs_msgs::msg::ConeWithCovariance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConeAssociationArray__unmatched(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<eufs_msgs::msg::ConeWithCovariance> *>(untyped_member);
  return &member[index];
}

void * get_function__ConeAssociationArray__unmatched(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<eufs_msgs::msg::ConeWithCovariance> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConeAssociationArray__unmatched(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const eufs_msgs::msg::ConeWithCovariance *>(
    get_const_function__ConeAssociationArray__unmatched(untyped_member, index));
  auto & value = *reinterpret_cast<eufs_msgs::msg::ConeWithCovariance *>(untyped_value);
  value = item;
}

void assign_function__ConeAssociationArray__unmatched(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<eufs_msgs::msg::ConeWithCovariance *>(
    get_function__ConeAssociationArray__unmatched(untyped_member, index));
  const auto & value = *reinterpret_cast<const eufs_msgs::msg::ConeWithCovariance *>(untyped_value);
  item = value;
}

void resize_function__ConeAssociationArray__unmatched(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<eufs_msgs::msg::ConeWithCovariance> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConeAssociationArray_message_member_array[4] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ConeAssociationArray, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "threshold",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ConeAssociationArray, threshold),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "matched",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<eufs_msgs::msg::ConeAssociation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ConeAssociationArray, matched),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConeAssociationArray__matched,  // size() function pointer
    get_const_function__ConeAssociationArray__matched,  // get_const(index) function pointer
    get_function__ConeAssociationArray__matched,  // get(index) function pointer
    fetch_function__ConeAssociationArray__matched,  // fetch(index, &value) function pointer
    assign_function__ConeAssociationArray__matched,  // assign(index, value) function pointer
    resize_function__ConeAssociationArray__matched  // resize(index) function pointer
  },
  {
    "unmatched",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<eufs_msgs::msg::ConeWithCovariance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(eufs_msgs::msg::ConeAssociationArray, unmatched),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConeAssociationArray__unmatched,  // size() function pointer
    get_const_function__ConeAssociationArray__unmatched,  // get_const(index) function pointer
    get_function__ConeAssociationArray__unmatched,  // get(index) function pointer
    fetch_function__ConeAssociationArray__unmatched,  // fetch(index, &value) function pointer
    assign_function__ConeAssociationArray__unmatched,  // assign(index, value) function pointer
    resize_function__ConeAssociationArray__unmatched  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConeAssociationArray_message_members = {
  "eufs_msgs::msg",  // message namespace
  "ConeAssociationArray",  // message name
  4,  // number of fields
  sizeof(eufs_msgs::msg::ConeAssociationArray),
  ConeAssociationArray_message_member_array,  // message members
  ConeAssociationArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ConeAssociationArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConeAssociationArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConeAssociationArray_message_members,
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
get_message_type_support_handle<eufs_msgs::msg::ConeAssociationArray>()
{
  return &::eufs_msgs::msg::rosidl_typesupport_introspection_cpp::ConeAssociationArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, eufs_msgs, msg, ConeAssociationArray)() {
  return &::eufs_msgs::msg::rosidl_typesupport_introspection_cpp::ConeAssociationArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
