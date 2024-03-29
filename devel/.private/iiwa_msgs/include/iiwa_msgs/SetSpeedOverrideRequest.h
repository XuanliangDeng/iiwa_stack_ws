// Generated by gencpp from file iiwa_msgs/SetSpeedOverrideRequest.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETSPEEDOVERRIDEREQUEST_H
#define IIWA_MSGS_MESSAGE_SETSPEEDOVERRIDEREQUEST_H


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
struct SetSpeedOverrideRequest_
{
  typedef SetSpeedOverrideRequest_<ContainerAllocator> Type;

  SetSpeedOverrideRequest_()
    : override_reduction(0.0)  {
    }
  SetSpeedOverrideRequest_(const ContainerAllocator& _alloc)
    : override_reduction(0.0)  {
  (void)_alloc;
    }



   typedef double _override_reduction_type;
  _override_reduction_type override_reduction;





  typedef boost::shared_ptr< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetSpeedOverrideRequest_

typedef ::iiwa_msgs::SetSpeedOverrideRequest_<std::allocator<void> > SetSpeedOverrideRequest;

typedef boost::shared_ptr< ::iiwa_msgs::SetSpeedOverrideRequest > SetSpeedOverrideRequestPtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetSpeedOverrideRequest const> SetSpeedOverrideRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45f4da4800337d6726e14c18e252b8dc";
  }

  static const char* value(const ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45f4da4800337d67ULL;
  static const uint64_t static_value2 = 0x26e14c18e252b8dcULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetSpeedOverrideRequest";
  }

  static const char* value(const ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float64 override_reduction\n\
\n\
";
  }

  static const char* value(const ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.override_reduction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetSpeedOverrideRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetSpeedOverrideRequest_<ContainerAllocator>& v)
  {
    s << indent << "override_reduction: ";
    Printer<double>::stream(s, indent + "  ", v.override_reduction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETSPEEDOVERRIDEREQUEST_H
