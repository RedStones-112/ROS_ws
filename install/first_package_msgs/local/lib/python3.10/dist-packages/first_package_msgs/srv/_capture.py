# generated from rosidl_generator_py/resource/_idl.py.em
# with input from first_package_msgs:srv/Capture.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Capture_Request(type):
    """Metaclass of message 'Capture_Request'."""

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
            module = import_type_support('first_package_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'first_package_msgs.srv.Capture_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Capture_Request(metaclass=Metaclass_Capture_Request):
    """Message class 'Capture_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Capture_Response(type):
    """Metaclass of message 'Capture_Response'."""

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
            module = import_type_support('first_package_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'first_package_msgs.srv.Capture_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Capture_Response(metaclass=Metaclass_Capture_Response):
    """Message class 'Capture_Response'."""

    __slots__ = [
        '_save_path',
    ]

    _fields_and_field_types = {
        'save_path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.save_path = kwargs.get('save_path', str())

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
        if self.save_path != other.save_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def save_path(self):
        """Message field 'save_path'."""
        return self._save_path

    @save_path.setter
    def save_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'save_path' field must be of type 'str'"
        self._save_path = value


class Metaclass_Capture(type):
    """Metaclass of service 'Capture'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('first_package_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'first_package_msgs.srv.Capture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__capture

            from first_package_msgs.srv import _capture
            if _capture.Metaclass_Capture_Request._TYPE_SUPPORT is None:
                _capture.Metaclass_Capture_Request.__import_type_support__()
            if _capture.Metaclass_Capture_Response._TYPE_SUPPORT is None:
                _capture.Metaclass_Capture_Response.__import_type_support__()


class Capture(metaclass=Metaclass_Capture):
    from first_package_msgs.srv._capture import Capture_Request as Request
    from first_package_msgs.srv._capture import Capture_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
