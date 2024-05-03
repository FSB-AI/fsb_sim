// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from eufs_msgs:srv/RecordStart.idl
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
#include "eufs_msgs/srv/detail/record_start__struct.h"
#include "eufs_msgs/srv/detail/record_start__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool eufs_msgs__srv__record_start__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("eufs_msgs.srv._record_start.RecordStart_Request", full_classname_dest, 47) == 0);
  }
  eufs_msgs__srv__RecordStart_Request * ros_message = _ros_message;
  {  // pack_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "pack_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pack_number = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * eufs_msgs__srv__record_start__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RecordStart_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("eufs_msgs.srv._record_start");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RecordStart_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  eufs_msgs__srv__RecordStart_Request * ros_message = (eufs_msgs__srv__RecordStart_Request *)raw_ros_message;
  {  // pack_number
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->pack_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pack_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "eufs_msgs/srv/detail/record_start__struct.h"
// already included above
// #include "eufs_msgs/srv/detail/record_start__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool eufs_msgs__srv__record_start__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("eufs_msgs.srv._record_start.RecordStart_Response", full_classname_dest, 48) == 0);
  }
  eufs_msgs__srv__RecordStart_Response * ros_message = _ros_message;
  {  // start_recording
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_recording");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->start_recording = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * eufs_msgs__srv__record_start__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RecordStart_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("eufs_msgs.srv._record_start");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RecordStart_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  eufs_msgs__srv__RecordStart_Response * ros_message = (eufs_msgs__srv__RecordStart_Response *)raw_ros_message;
  {  // start_recording
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->start_recording ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_recording", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
