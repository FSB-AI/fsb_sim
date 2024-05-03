// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from eufs_msgs:msg/ConeAssociationArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "eufs_msgs/msg/detail/cone_association_array__struct.h"
#include "eufs_msgs/msg/detail/cone_association_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "eufs_msgs/msg/detail/cone_association__functions.h"
#include "eufs_msgs/msg/detail/cone_with_covariance__functions.h"
// end nested array functions include
bool eufs_msgs__msg__cone_association__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * eufs_msgs__msg__cone_association__convert_to_py(void * raw_ros_message);
bool eufs_msgs__msg__cone_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * eufs_msgs__msg__cone_with_covariance__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool eufs_msgs__msg__cone_association_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("eufs_msgs.msg._cone_association_array.ConeAssociationArray", full_classname_dest, 58) == 0);
  }
  eufs_msgs__msg__ConeAssociationArray * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->threshold = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'matched'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!eufs_msgs__msg__ConeAssociation__Sequence__init(&(ros_message->matched), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create eufs_msgs__msg__ConeAssociation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    eufs_msgs__msg__ConeAssociation * dest = ros_message->matched.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!eufs_msgs__msg__cone_association__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // unmatched
    PyObject * field = PyObject_GetAttrString(_pymsg, "unmatched");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unmatched'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!eufs_msgs__msg__ConeWithCovariance__Sequence__init(&(ros_message->unmatched), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create eufs_msgs__msg__ConeWithCovariance__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    eufs_msgs__msg__ConeWithCovariance * dest = ros_message->unmatched.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!eufs_msgs__msg__cone_with_covariance__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * eufs_msgs__msg__cone_association_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConeAssociationArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("eufs_msgs.msg._cone_association_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConeAssociationArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  eufs_msgs__msg__ConeAssociationArray * ros_message = (eufs_msgs__msg__ConeAssociationArray *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type.data,
      strlen(ros_message->type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "threshold", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched
    PyObject * field = NULL;
    size_t size = ros_message->matched.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    eufs_msgs__msg__ConeAssociation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->matched.data[i]);
      PyObject * pyitem = eufs_msgs__msg__cone_association__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unmatched
    PyObject * field = NULL;
    size_t size = ros_message->unmatched.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    eufs_msgs__msg__ConeWithCovariance * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->unmatched.data[i]);
      PyObject * pyitem = eufs_msgs__msg__cone_with_covariance__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "unmatched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
