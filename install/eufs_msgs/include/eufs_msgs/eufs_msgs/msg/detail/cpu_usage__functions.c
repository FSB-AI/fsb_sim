// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from eufs_msgs:msg/CpuUsage.idl
// generated code does not contain a copyright notice
#include "eufs_msgs/msg/detail/cpu_usage__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `all`
// Member `cpus`
#include "eufs_msgs/msg/detail/cpu_status__functions.h"

bool
eufs_msgs__msg__CpuUsage__init(eufs_msgs__msg__CpuUsage * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    eufs_msgs__msg__CpuUsage__fini(msg);
    return false;
  }
  // all
  if (!eufs_msgs__msg__CpuStatus__init(&msg->all)) {
    eufs_msgs__msg__CpuUsage__fini(msg);
    return false;
  }
  // cpus
  if (!eufs_msgs__msg__CpuStatus__Sequence__init(&msg->cpus, 0)) {
    eufs_msgs__msg__CpuUsage__fini(msg);
    return false;
  }
  return true;
}

void
eufs_msgs__msg__CpuUsage__fini(eufs_msgs__msg__CpuUsage * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // all
  eufs_msgs__msg__CpuStatus__fini(&msg->all);
  // cpus
  eufs_msgs__msg__CpuStatus__Sequence__fini(&msg->cpus);
}

bool
eufs_msgs__msg__CpuUsage__are_equal(const eufs_msgs__msg__CpuUsage * lhs, const eufs_msgs__msg__CpuUsage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // all
  if (!eufs_msgs__msg__CpuStatus__are_equal(
      &(lhs->all), &(rhs->all)))
  {
    return false;
  }
  // cpus
  if (!eufs_msgs__msg__CpuStatus__Sequence__are_equal(
      &(lhs->cpus), &(rhs->cpus)))
  {
    return false;
  }
  return true;
}

bool
eufs_msgs__msg__CpuUsage__copy(
  const eufs_msgs__msg__CpuUsage * input,
  eufs_msgs__msg__CpuUsage * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // all
  if (!eufs_msgs__msg__CpuStatus__copy(
      &(input->all), &(output->all)))
  {
    return false;
  }
  // cpus
  if (!eufs_msgs__msg__CpuStatus__Sequence__copy(
      &(input->cpus), &(output->cpus)))
  {
    return false;
  }
  return true;
}

eufs_msgs__msg__CpuUsage *
eufs_msgs__msg__CpuUsage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__CpuUsage * msg = (eufs_msgs__msg__CpuUsage *)allocator.allocate(sizeof(eufs_msgs__msg__CpuUsage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(eufs_msgs__msg__CpuUsage));
  bool success = eufs_msgs__msg__CpuUsage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
eufs_msgs__msg__CpuUsage__destroy(eufs_msgs__msg__CpuUsage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    eufs_msgs__msg__CpuUsage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
eufs_msgs__msg__CpuUsage__Sequence__init(eufs_msgs__msg__CpuUsage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__CpuUsage * data = NULL;

  if (size) {
    data = (eufs_msgs__msg__CpuUsage *)allocator.zero_allocate(size, sizeof(eufs_msgs__msg__CpuUsage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = eufs_msgs__msg__CpuUsage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        eufs_msgs__msg__CpuUsage__fini(&data[i - 1]);
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
eufs_msgs__msg__CpuUsage__Sequence__fini(eufs_msgs__msg__CpuUsage__Sequence * array)
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
      eufs_msgs__msg__CpuUsage__fini(&array->data[i]);
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

eufs_msgs__msg__CpuUsage__Sequence *
eufs_msgs__msg__CpuUsage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  eufs_msgs__msg__CpuUsage__Sequence * array = (eufs_msgs__msg__CpuUsage__Sequence *)allocator.allocate(sizeof(eufs_msgs__msg__CpuUsage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = eufs_msgs__msg__CpuUsage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
eufs_msgs__msg__CpuUsage__Sequence__destroy(eufs_msgs__msg__CpuUsage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    eufs_msgs__msg__CpuUsage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
eufs_msgs__msg__CpuUsage__Sequence__are_equal(const eufs_msgs__msg__CpuUsage__Sequence * lhs, const eufs_msgs__msg__CpuUsage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!eufs_msgs__msg__CpuUsage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
eufs_msgs__msg__CpuUsage__Sequence__copy(
  const eufs_msgs__msg__CpuUsage__Sequence * input,
  eufs_msgs__msg__CpuUsage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(eufs_msgs__msg__CpuUsage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    eufs_msgs__msg__CpuUsage * data =
      (eufs_msgs__msg__CpuUsage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!eufs_msgs__msg__CpuUsage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          eufs_msgs__msg__CpuUsage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!eufs_msgs__msg__CpuUsage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
