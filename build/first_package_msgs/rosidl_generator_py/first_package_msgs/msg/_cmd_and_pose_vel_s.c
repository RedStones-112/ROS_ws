// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from first_package_msgs:msg/CmdAndPoseVel.idl
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
#include "first_package_msgs/msg/detail/cmd_and_pose_vel__struct.h"
#include "first_package_msgs/msg/detail/cmd_and_pose_vel__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool first_package_msgs__msg__cmd_and_pose_vel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("first_package_msgs.msg._cmd_and_pose_vel.CmdAndPoseVel", full_classname_dest, 54) == 0);
  }
  first_package_msgs__msg__CmdAndPoseVel * ros_message = _ros_message;
  {  // cmd_vel_linear
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel_linear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_vel_linear = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_vel_angular
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_vel_angular");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_vel_angular = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pose_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pose_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pose_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pose_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // linear_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_vel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * first_package_msgs__msg__cmd_and_pose_vel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CmdAndPoseVel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("first_package_msgs.msg._cmd_and_pose_vel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CmdAndPoseVel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  first_package_msgs__msg__CmdAndPoseVel * ros_message = (first_package_msgs__msg__CmdAndPoseVel *)raw_ros_message;
  {  // cmd_vel_linear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_vel_linear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel_linear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_vel_angular
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_vel_angular);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_vel_angular", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pose_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pose_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
