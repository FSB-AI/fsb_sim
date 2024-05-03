// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from eufs_msgs:msg/ConeAssociation.idl
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
#include "eufs_msgs/msg/detail/cone_association__struct.h"
#include "eufs_msgs/msg/detail/cone_association__functions.h"

bool eufs_msgs__msg__cone_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * eufs_msgs__msg__cone_with_covariance__convert_to_py(void * raw_ros_message);
bool eufs_msgs__msg__cone_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * eufs_msgs__msg__cone_with_covariance__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool eufs_msgs__msg__cone_association__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("eufs_msgs.msg._cone_association.ConeAssociation", full_classname_dest, 47) == 0);
  }
  eufs_msgs__msg__ConeAssociation * ros_message = _ros_message;
  {  // first
    PyObject * field = PyObject_GetAttrString(_pymsg, "first");
    if (!field) {
      return false;
    }
    if (!eufs_msgs__msg__cone_with_covariance__convert_from_py(field, &ros_message->first)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // second
    PyObject * field = PyObject_GetAttrString(_pymsg, "second");
    if (!field) {
      return false;
    }
    if (!eufs_msgs__msg__cone_with_covariance__convert_from_py(field, &ros_message->second)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * eufs_msgs__msg__cone_association__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConeAssociation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("eufs_msgs.msg._cone_association");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConeAssociation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  eufs_msgs__msg__ConeAssociation * ros_message = (eufs_msgs__msg__ConeAssociation *)raw_ros_message;
  {  // first
    PyObject * field = NULL;
    field = eufs_msgs__msg__cone_with_covariance__convert_to_py(&ros_message->first);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "first", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // second
    PyObject * field = NULL;
    field = eufs_msgs__msg__cone_with_covariance__convert_to_py(&ros_message->second);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
