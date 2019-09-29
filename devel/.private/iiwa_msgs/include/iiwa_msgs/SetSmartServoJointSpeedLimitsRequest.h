// Generated by gencpp from file iiwa_msgs/SetSmartServoJointSpeedLimitsRequest.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETSMARTSERVOJOINTSPEEDLIMITSREQUEST_H
#define IIWA_MSGS_MESSAGE_SETSMARTSERVOJOINTSPEEDLIMITSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SetSmartServoJointSpeedLimitsRequest_
{
  typedef SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> Type;

  SetSmartServoJointSpeedLimitsRequest_()
    : joint_relative_velocity(0.0)
    , joint_relative_acceleration(0.0)
    , override_joint_acceleration(0.0)  {
    }
  SetSmartServoJointSpeedLimitsRequest_(const ContainerAllocator& _alloc)
    : joint_relative_velocity(0.0)
    , joint_relative_acceleration(0.0)
    , override_joint_acceleration(0.0)  {
  (void)_alloc;
    }



   typedef double _joint_relative_velocity_type;
  _joint_relative_velocity_type joint_relative_velocity;

   typedef double _joint_relative_acceleration_type;
  _joint_relative_acceleration_type joint_relative_acceleration;

   typedef double _override_joint_acceleration_type;
  _override_joint_acceleration_type override_joint_acceleration;





  typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSmartServoJointSpeedLimitsRequest_

typedef ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<std::allocator<void> > SetSmartServoJointSpeedLimitsRequest;

typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest > SetSmartServoJointSpeedLimitsRequestPtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest const> SetSmartServoJointSpeedLimitsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iiwa_msgs': ['/home/clearlab/iiwa_stack_ws/src/iiwa_stack/iiwa_msgs/msg', '/home/clearlab/iiwa_stack_ws/devel/.private/iiwa_msgs/share/iiwa_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e28d392b765001fa175af1a9d6aedcd";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e28d392b765001fULL;
  static const uint64_t static_value2 = 0xa175af1a9d6aedcdULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetSmartServoJointSpeedLimitsRequest";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
float64 joint_relative_velocity\n\
\n\
\n\
float64 joint_relative_acceleration\n\
\n\
\n\
float64 override_joint_acceleration\n\
\n\
";
  }

  static const char* value(const ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_relative_velocity);
      stream.next(m.joint_relative_acceleration);
      stream.next(m.override_joint_acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSmartServoJointSpeedLimitsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetSmartServoJointSpeedLimitsRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_relative_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.joint_relative_velocity);
    s << indent << "joint_relative_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.joint_relative_acceleration);
    s << indent << "override_joint_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.override_joint_acceleration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETSMARTSERVOJOINTSPEEDLIMITSREQUEST_H
