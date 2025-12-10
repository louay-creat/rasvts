# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smartfleet_msgs:msg/DeliveryTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeliveryTask(type):
    """Metaclass of message 'DeliveryTask'."""

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
                'smartfleet_msgs.msg.DeliveryTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__delivery_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__delivery_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__delivery_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__delivery_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__delivery_task

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

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


class DeliveryTask(metaclass=Metaclass_DeliveryTask):
    """Message class 'DeliveryTask'."""

    __slots__ = [
        '_id',
        '_pickup',
        '_dropoff',
        '_release_time',
        '_deadline',
        '_size',
        '_weight',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'pickup': 'geometry_msgs/Pose',
        'dropoff': 'geometry_msgs/Pose',
        'release_time': 'builtin_interfaces/Time',
        'deadline': 'builtin_interfaces/Time',
        'size': 'float',
        'weight': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import Pose
        self.pickup = kwargs.get('pickup', Pose())
        from geometry_msgs.msg import Pose
        self.dropoff = kwargs.get('dropoff', Pose())
        from builtin_interfaces.msg import Time
        self.release_time = kwargs.get('release_time', Time())
        from builtin_interfaces.msg import Time
        self.deadline = kwargs.get('deadline', Time())
        self.size = kwargs.get('size', float())
        self.weight = kwargs.get('weight', float())

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
        if self.id != other.id:
            return False
        if self.pickup != other.pickup:
            return False
        if self.dropoff != other.dropoff:
            return False
        if self.release_time != other.release_time:
            return False
        if self.deadline != other.deadline:
            return False
        if self.size != other.size:
            return False
        if self.weight != other.weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def pickup(self):
        """Message field 'pickup'."""
        return self._pickup

    @pickup.setter
    def pickup(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pickup' field must be a sub message of type 'Pose'"
        self._pickup = value

    @builtins.property
    def dropoff(self):
        """Message field 'dropoff'."""
        return self._dropoff

    @dropoff.setter
    def dropoff(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'dropoff' field must be a sub message of type 'Pose'"
        self._dropoff = value

    @builtins.property
    def release_time(self):
        """Message field 'release_time'."""
        return self._release_time

    @release_time.setter
    def release_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'release_time' field must be a sub message of type 'Time'"
        self._release_time = value

    @builtins.property
    def deadline(self):
        """Message field 'deadline'."""
        return self._deadline

    @deadline.setter
    def deadline(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'deadline' field must be a sub message of type 'Time'"
        self._deadline = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'size' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'size' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._size = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'weight' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._weight = value
