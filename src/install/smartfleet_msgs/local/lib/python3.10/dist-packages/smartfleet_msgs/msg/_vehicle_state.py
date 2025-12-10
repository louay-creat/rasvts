# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smartfleet_msgs:msg/VehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('smartfleet_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'smartfleet_msgs.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleState(metaclass=Metaclass_VehicleState):
    """Message class 'VehicleState'."""

    __slots__ = [
        '_vehicle_id',
        '_pose',
        '_battery_level',
        '_capacity_remaining',
        '_current_task_id',
        '_is_available',
    ]

    _fields_and_field_types = {
        'vehicle_id': 'int32',
        'pose': 'geometry_msgs/Pose',
        'battery_level': 'float',
        'capacity_remaining': 'float',
        'current_task_id': 'int32',
        'is_available': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_id = kwargs.get('vehicle_id', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.battery_level = kwargs.get('battery_level', float())
        self.capacity_remaining = kwargs.get('capacity_remaining', float())
        self.current_task_id = kwargs.get('current_task_id', int())
        self.is_available = kwargs.get('is_available', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.vehicle_id != other.vehicle_id:
            return False
        if self.pose != other.pose:
            return False
        if self.battery_level != other.battery_level:
            return False
        if self.capacity_remaining != other.capacity_remaining:
            return False
        if self.current_task_id != other.current_task_id:
            return False
        if self.is_available != other.is_available:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vehicle_id(self):
        """Message field 'vehicle_id'."""
        return self._vehicle_id

    @vehicle_id.setter
    def vehicle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vehicle_id' field must be an integer in [-2147483648, 2147483647]"
        self._vehicle_id = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_level = value

    @builtins.property
    def capacity_remaining(self):
        """Message field 'capacity_remaining'."""
        return self._capacity_remaining

    @capacity_remaining.setter
    def capacity_remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'capacity_remaining' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'capacity_remaining' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._capacity_remaining = value

    @builtins.property
    def current_task_id(self):
        """Message field 'current_task_id'."""
        return self._current_task_id

    @current_task_id.setter
    def current_task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_task_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_task_id' field must be an integer in [-2147483648, 2147483647]"
        self._current_task_id = value

    @builtins.property
    def is_available(self):
        """Message field 'is_available'."""
        return self._is_available

    @is_available.setter
    def is_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_available' field must be of type 'bool'"
        self._is_available = value
