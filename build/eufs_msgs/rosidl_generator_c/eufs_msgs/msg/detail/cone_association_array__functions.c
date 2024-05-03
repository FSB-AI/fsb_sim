// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice
#include "eufs_msgs/msg/detail/cone_association_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `matched`
#include "eufs_msgs/msg/detail/cone_association__functions.h"
// Member `unmatched`
#include "eufs_msgs/msg/detail/cone_with_covariance__functions.h"

bool
eufs_msgs__msg__ConeAssociationArray__init(eufs_msgs__msg__ConeAssociationArray * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    eufs_msgs__msg__ConeAssociationArray__fini(msg);
    return false;
  }
  // threshold
  // matched
  if (!eufs_msgs__msg__ConeAssociation__Sequence__init(&msg->matched, 0)) {
    eufs_msgs__msg__ConeAssociationArray__fini(msg);
    return false;
  }
  // unmatched
  if (!eufs_msgs__msg__ConeWithCovariance__Sequence__init(&msg->unmatched, 0)) {
    eufs_msgs__msg__ConeAssociationArray__fini(msg);
    return false;
  }
  return true;
}

void
eufs_msgs__msg__ConeAssociationArray__fini(eufs_msgs__msg__ConeAssociationArray * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // threshold
  // matched
  eufs_msgs__msg__ConeAssociation__Sequence__fini(&msg->matched);
  // unmatched
  eufs_msgs__msg__ConeWithCovariance__Sequence__fini(&msg->unmatched);
}

bool
eufs_msgs__msg__ConeAssociationArray__are_equal(const eufs_msgs__msg__ConeAssociationArray * lhs, const eufs_msgs__msg__ConeAssociationArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // threshold
  if (lhs->threshold != rhs->threshold) {
    return false;
  }
  // matched
  if (!eufs_msgs__msg__ConeAssociation__Sequence__are_equal(
      &(lhs->matched), &(rhs->matched)))
  {
    return false;
  }
  // unmatched
  if (!eufs_msgs__msg__ConeWithCovariance__Sequence__are_equal(
      &(lhs->unmatched), &(rhs->unmatched)))
  {
    return false;
  }
  return true;
}

bool
eufs_msgs__msg__ConeAssociationArray__copy(
  const eufs_msgs__msg__ConeAssociationArray * input,
  eufs_msgs__msg__ConeAssociationArray * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // threshold
  output->threshold = input->threshold;
  // matched
  if (!eufs_msgs__msg__ConeAssociation__Sequence__copy(
      &(input->matched), &(output->matched)))
  {
    return false;
  }
  // unmatched
  if (!eufs_msgs__msg__ConeWithCovariance__Sequence__copy(
      &(input->unmatched), &(output->unmatched)))
  {
    return false;
  }
  return true;
}

eufs_msgs__msg__ConeAssociationArray *
eufs_msgs__msg__ConeAssociationArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__ConeAssociationArray * msg = (eufs_msgs__msg__ConeAssociationArray *)allocator.allocate(sizeof(eufs_msgs__msg__ConeAssociationArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eufs_msgs__msg__ConeAssociationArray));
  bool success = eufs_msgs__msg__ConeAssociationArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eufs_msgs__msg__ConeAssociationArray__destroy(eufs_msgs__msg__ConeAssociationArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eufs_msgs__msg__ConeAssociationArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eufs_msgs__msg__ConeAssociationArray__Sequence__init(eufs_msgs__msg__ConeAssociationArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__ConeAssociationArray * data = NULL;

  if (size) {
    data = (eufs_msgs__msg__ConeAssociationArray *)allocator.zero_allocate(size, sizeof(eufs_msgs__msg__ConeAssociationArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eufs_msgs__msg__ConeAssociationArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eufs_msgs__msg__ConeAssociationArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
eufs_msgs__msg__ConeAssociationArray__Sequence__fini(eufs_msgs__msg__ConeAssociationArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      eufs_msgs__msg__ConeAssociationArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

eufs_msgs__msg__ConeAssociationArray__Sequence *
eufs_msgs__msg__ConeAssociationArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__ConeAssociationArray__Sequence * array = (eufs_msgs__msg__ConeAssociationArray__Sequence *)allocator.allocate(sizeof(eufs_msgs__msg__ConeAssociationArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eufs_msgs__msg__ConeAssociationArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eufs_msgs__msg__ConeAssociationArray__Sequence__destroy(eufs_msgs__msg__ConeAssociationArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eufs_msgs__msg__ConeAssociationArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eufs_msgs__msg__ConeAssociationArray__Sequence__are_equal(const eufs_msgs__msg__ConeAssociationArray__Sequence * lhs, const eufs_msgs__msg__ConeAssociationArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eufs_msgs__msg__ConeAssociationArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eufs_msgs__msg__ConeAssociationArray__Sequence__copy(
  const eufs_msgs__msg__ConeAssociationArray__Sequence * input,
  eufs_msgs__msg__ConeAssociationArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eufs_msgs__msg__ConeAssociationArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eufs_msgs__msg__ConeAssociationArray * data =
      (eufs_msgs__msg__ConeAssociationArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eufs_msgs__msg__ConeAssociationArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eufs_msgs__msg__ConeAssociationArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eufs_msgs__msg__ConeAssociationArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
