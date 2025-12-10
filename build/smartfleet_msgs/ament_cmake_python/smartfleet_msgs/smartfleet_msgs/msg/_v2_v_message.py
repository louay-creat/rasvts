# generated from rosidl_generator_py/resource/_idl.py.em
# with input from smartfleet_msgs:msg/V2VMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'receivers_id'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_V2VMessage(type):
    """Metaclass of message 'V2VMessage'."""

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
                'smartfleet_msgs.msg.V2VMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__v2_v_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__v2_v_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__v2_v_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__v2_v_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__v2_v_message

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class V2VMessage(metaclass=Metaclass_V2VMessage):
    """Message class 'V2VMessage'."""

    __slots__ = [
        '_sender_id',
        '_receivers_id',
        '_stamp',
        '_type',
        '_payload',
    ]

    _fields_and_field_types = {
        'sender_id': 'int32',
        'receivers_id': 'sequence<int32>',
        'stamp': 'builtin_interfaces/Time',
        'type': 'string',
        'payload': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sender_id = kwargs.get('sender_id', int())
        self.receivers_id = array.array('i', kwargs.get('receivers_id', []))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.type = kwargs.get('type', str())
        self.payload = kwargs.get('payload', str())

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
        if self.sender_id != other.sender_id:
            return False
        if self.receivers_id != other.receivers_id:
            return False
        if self.stamp != other.stamp:
            return False
        if self.type != other.type:
            return False
        if self.payload != other.payload:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sender_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sender_id' field must be an integer in [-2147483648, 2147483647]"
        self._sender_id = value

    @builtins.property
    def receivers_id(self):
        """Message field 'receivers_id'."""
        return self._receivers_id

    @receivers_id.setter
    def receivers_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'receivers_id' array.array() must have the type code of 'i'"
            self._receivers_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'receivers_id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._receivers_id = array.array('i', value)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def payload(self):
        """Message field 'payload'."""
        return self._payload

    @payload.setter
    def payload(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'payload' field must be of type 'str'"
        self._payload = value
