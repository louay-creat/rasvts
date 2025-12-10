// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from smartfleet_msgs:msg/VehicleState.idl
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
#include "smartfleet_msgs/msg/detail/vehicle_state__struct.h"
#include "smartfleet_msgs/msg/detail/vehicle_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool smartfleet_msgs__msg__vehicle_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("smartfleet_msgs.msg._vehicle_state.VehicleState", full_classname_dest, 47) == 0);
  }
  smartfleet_msgs__msg__VehicleState * ros_message = _ros_message;
  {  // vehicle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // battery_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->battery_level = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // capacity_remaining
    PyObject * field = PyObject_GetAttrString(_pymsg, "capacity_remaining");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->capacity_remaining = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_task_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_task_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_available = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * smartfleet_msgs__msg__vehicle_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("smartfleet_msgs.msg._vehicle_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  smartfleet_msgs__msg__VehicleState * ros_message = (smartfleet_msgs__msg__VehicleState *)raw_ros_message;
  {  // vehicle_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vehicle_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->battery_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capacity_remaining
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->capacity_remaining);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capacity_remaining", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_task_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_task_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
