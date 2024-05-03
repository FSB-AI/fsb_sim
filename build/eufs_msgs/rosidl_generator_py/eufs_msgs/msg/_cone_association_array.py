# generated from rosidl_generator_py/resource/_idl.py.em
# with input from eufs_msgs:msg/ConeAssociationArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConeAssociationArray(type):
    """Metaclass of message 'ConeAssociationArray'."""

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
            module = import_type_support('eufs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'eufs_msgs.msg.ConeAssociationArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cone_association_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cone_association_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cone_association_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cone_association_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cone_association_array

            from eufs_msgs.msg import ConeAssociation
            if ConeAssociation.__class__._TYPE_SUPPORT is None:
                ConeAssociation.__class__.__import_type_support__()

            from eufs_msgs.msg import ConeWithCovariance
            if ConeWithCovariance.__class__._TYPE_SUPPORT is None:
                ConeWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConeAssociationArray(metaclass=Metaclass_ConeAssociationArray):
    """Message class 'ConeAssociationArray'."""

    __slots__ = [
        '_type',
        '_threshold',
        '_matched',
        '_unmatched',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'threshold': 'double',
        'matched': 'sequence<eufs_msgs/ConeAssociation>',
        'unmatched': 'sequence<eufs_msgs/ConeWithCovariance>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['eufs_msgs', 'msg'], 'ConeAssociation')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['eufs_msgs', 'msg'], 'ConeWithCovariance')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.threshold = kwargs.get('threshold', float())
        self.matched = kwargs.get('matched', [])
        self.unmatched = kwargs.get('unmatched', [])

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
        if self.type != other.type:
            return False
        if self.threshold != other.threshold:
            return False
        if self.matched != other.matched:
            return False
        if self.unmatched != other.unmatched:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def threshold(self):
        """Message field 'threshold'."""
        return self._threshold

    @threshold.setter
    def threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'threshold' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'threshold' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._threshold = value

    @builtins.property
    def matched(self):
        """Message field 'matched'."""
        return self._matched

    @matched.setter
    def matched(self, value):
        if __debug__:
            from eufs_msgs.msg import ConeAssociation
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
                 all(isinstance(v, ConeAssociation) for v in value) and
                 True), \
                "The 'matched' field must be a set or sequence and each value of type 'ConeAssociation'"
        self._matched = value

    @builtins.property
    def unmatched(self):
        """Message field 'unmatched'."""
        return self._unmatched

    @unmatched.setter
    def unmatched(self, value):
        if __debug__:
            from eufs_msgs.msg import ConeWithCovariance
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
                 all(isinstance(v, ConeWithCovariance) for v in value) and
                 True), \
                "The 'unmatched' field must be a set or sequence and each value of type 'ConeWithCovariance'"
        self._unmatched = value
