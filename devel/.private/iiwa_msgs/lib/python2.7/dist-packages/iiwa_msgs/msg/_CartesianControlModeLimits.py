# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from iiwa_msgs/CartesianControlModeLimits.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import iiwa_msgs.msg

class CartesianControlModeLimits(genpy.Message):
  _md5sum = "36b3a99aeab262cf60ecef9129ccb529"
  _type = "iiwa_msgs/CartesianControlModeLimits"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Sets the maximum cartesian deviation accepted. If the deviation is exceeded a stop condition occurs. 
# [x, y, z] in [mm]. Precondition: value > 0.0.
# [a, b, c] in [rad]. Precondition: value > 0.0.
CartesianQuantity max_path_deviation

# The maximum control force parameter.
# [x, y, z] in [N]. Precondition: value > 0.0.
# [a, b, c] in [Nm]. Precondition: value > 0.0.
CartesianQuantity max_control_force

# Indicates whether a stop condition is fired if the maximum control force is exceeded. 
bool max_control_force_stop

# Maximum Cartesian velocity parameter 
# [x, y, z] in [mm/s]. Precondition: value > 0.0.
# [a, b, c] in [rad/s]. Precondition: value > 0.0.
CartesianQuantity max_cartesian_velocity 

================================================================================
MSG: iiwa_msgs/CartesianQuantity
float32 x
float32 y
float32 z
float32 a
float32 b
float32 c"""
  __slots__ = ['max_path_deviation','max_control_force','max_control_force_stop','max_cartesian_velocity']
  _slot_types = ['iiwa_msgs/CartesianQuantity','iiwa_msgs/CartesianQuantity','bool','iiwa_msgs/CartesianQuantity']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       max_path_deviation,max_control_force,max_control_force_stop,max_cartesian_velocity

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CartesianControlModeLimits, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.max_path_deviation is None:
        self.max_path_deviation = iiwa_msgs.msg.CartesianQuantity()
      if self.max_control_force is None:
        self.max_control_force = iiwa_msgs.msg.CartesianQuantity()
      if self.max_control_force_stop is None:
        self.max_control_force_stop = False
      if self.max_cartesian_velocity is None:
        self.max_cartesian_velocity = iiwa_msgs.msg.CartesianQuantity()
    else:
      self.max_path_deviation = iiwa_msgs.msg.CartesianQuantity()
      self.max_control_force = iiwa_msgs.msg.CartesianQuantity()
      self.max_control_force_stop = False
      self.max_cartesian_velocity = iiwa_msgs.msg.CartesianQuantity()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_12fB6f().pack(_x.max_path_deviation.x, _x.max_path_deviation.y, _x.max_path_deviation.z, _x.max_path_deviation.a, _x.max_path_deviation.b, _x.max_path_deviation.c, _x.max_control_force.x, _x.max_control_force.y, _x.max_control_force.z, _x.max_control_force.a, _x.max_control_force.b, _x.max_control_force.c, _x.max_control_force_stop, _x.max_cartesian_velocity.x, _x.max_cartesian_velocity.y, _x.max_cartesian_velocity.z, _x.max_cartesian_velocity.a, _x.max_cartesian_velocity.b, _x.max_cartesian_velocity.c))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.max_path_deviation is None:
        self.max_path_deviation = iiwa_msgs.msg.CartesianQuantity()
      if self.max_control_force is None:
        self.max_control_force = iiwa_msgs.msg.CartesianQuantity()
      if self.max_cartesian_velocity is None:
        self.max_cartesian_velocity = iiwa_msgs.msg.CartesianQuantity()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.max_path_deviation.x, _x.max_path_deviation.y, _x.max_path_deviation.z, _x.max_path_deviation.a, _x.max_path_deviation.b, _x.max_path_deviation.c, _x.max_control_force.x, _x.max_control_force.y, _x.max_control_force.z, _x.max_control_force.a, _x.max_control_force.b, _x.max_control_force.c, _x.max_control_force_stop, _x.max_cartesian_velocity.x, _x.max_cartesian_velocity.y, _x.max_cartesian_velocity.z, _x.max_cartesian_velocity.a, _x.max_cartesian_velocity.b, _x.max_cartesian_velocity.c,) = _get_struct_12fB6f().unpack(str[start:end])
      self.max_control_force_stop = bool(self.max_control_force_stop)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_12fB6f().pack(_x.max_path_deviation.x, _x.max_path_deviation.y, _x.max_path_deviation.z, _x.max_path_deviation.a, _x.max_path_deviation.b, _x.max_path_deviation.c, _x.max_control_force.x, _x.max_control_force.y, _x.max_control_force.z, _x.max_control_force.a, _x.max_control_force.b, _x.max_control_force.c, _x.max_control_force_stop, _x.max_cartesian_velocity.x, _x.max_cartesian_velocity.y, _x.max_cartesian_velocity.z, _x.max_cartesian_velocity.a, _x.max_cartesian_velocity.b, _x.max_cartesian_velocity.c))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.max_path_deviation is None:
        self.max_path_deviation = iiwa_msgs.msg.CartesianQuantity()
      if self.max_control_force is None:
        self.max_control_force = iiwa_msgs.msg.CartesianQuantity()
      if self.max_cartesian_velocity is None:
        self.max_cartesian_velocity = iiwa_msgs.msg.CartesianQuantity()
      end = 0
      _x = self
      start = end
      end += 73
      (_x.max_path_deviation.x, _x.max_path_deviation.y, _x.max_path_deviation.z, _x.max_path_deviation.a, _x.max_path_deviation.b, _x.max_path_deviation.c, _x.max_control_force.x, _x.max_control_force.y, _x.max_control_force.z, _x.max_control_force.a, _x.max_control_force.b, _x.max_control_force.c, _x.max_control_force_stop, _x.max_cartesian_velocity.x, _x.max_cartesian_velocity.y, _x.max_cartesian_velocity.z, _x.max_cartesian_velocity.a, _x.max_cartesian_velocity.b, _x.max_cartesian_velocity.c,) = _get_struct_12fB6f().unpack(str[start:end])
      self.max_control_force_stop = bool(self.max_control_force_stop)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_12fB6f = None
def _get_struct_12fB6f():
    global _struct_12fB6f
    if _struct_12fB6f is None:
        _struct_12fB6f = struct.Struct("<12fB6f")
    return _struct_12fB6f