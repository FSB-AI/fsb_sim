// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice
#include "eufs_msgs/msg/detail/cone_association_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "eufs_msgs/msg/detail/cone_association_array__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace eufs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const eufs_msgs::msg::ConeAssociation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  eufs_msgs::msg::ConeAssociation &);
size_t get_serialized_size(
  const eufs_msgs::msg::ConeAssociation &,
  size_t current_alignment);
size_t
max_serialized_size_ConeAssociation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace eufs_msgs

namespace eufs_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const eufs_msgs::msg::ConeWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  eufs_msgs::msg::ConeWithCovariance &);
size_t get_serialized_size(
  const eufs_msgs::msg::ConeWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_ConeWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace eufs_msgs


namespace eufs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eufs_msgs
cdr_serialize(
  const eufs_msgs::msg::ConeAssociationArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: threshold
  cdr << ros_message.threshold;
  // Member: matched
  {
    size_t size = ros_message.matched.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      eufs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.matched[i],
        cdr);
    }
  }
  // Member: unmatched
  {
    size_t size = ros_message.unmatched.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      eufs_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.unmatched[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eufs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  eufs_msgs::msg::ConeAssociationArray & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: threshold
  cdr >> ros_message.threshold;

  // Member: matched
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.matched.resize(size);
    for (size_t i = 0; i < size; i++) {
      eufs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.matched[i]);
    }
  }

  // Member: unmatched
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.unmatched.resize(size);
    for (size_t i = 0; i < size; i++) {
      eufs_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.unmatched[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eufs_msgs
get_serialized_size(
  const eufs_msgs::msg::ConeAssociationArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);
  // Member: threshold
  {
    size_t item_size = sizeof(ros_message.threshold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched
  {
    size_t array_size = ros_message.matched.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        eufs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.matched[index], current_alignment);
    }
  }
  // Member: unmatched
  {
    size_t array_size = ros_message.unmatched.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        eufs_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.unmatched[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_eufs_msgs
max_serialized_size_ConeAssociationArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: threshold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        eufs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConeAssociation(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: unmatched
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        eufs_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ConeWithCovariance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = eufs_msgs::msg::ConeAssociationArray;
    is_plain =
      (
      offsetof(DataType, unmatched) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ConeAssociationArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const eufs_msgs::msg::ConeAssociationArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConeAssociationArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<eufs_msgs::msg::ConeAssociationArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConeAssociationArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const eufs_msgs::msg::ConeAssociationArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConeAssociationArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ConeAssociationArray(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ConeAssociationArray__callbacks = {
  "eufs_msgs::msg",
  "ConeAssociationArray",
  _ConeAssociationArray__cdr_serialize,
  _ConeAssociationArray__cdr_deserialize,
  _ConeAssociationArray__get_serialized_size,
  _ConeAssociationArray__max_serialized_size
};

static rosidl_message_type_support_t _ConeAssociationArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConeAssociationArray__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace eufs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_eufs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<eufs_msgs::msg::ConeAssociationArray>()
{
  return &eufs_msgs::msg::typesupport_fastrtps_cpp::_ConeAssociationArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, eufs_msgs, msg, ConeAssociationArray)() {
  return &eufs_msgs::msg::typesupport_fastrtps_cpp::_ConeAssociationArray__handle;
}

#ifdef __cplusplus
}
#endif
