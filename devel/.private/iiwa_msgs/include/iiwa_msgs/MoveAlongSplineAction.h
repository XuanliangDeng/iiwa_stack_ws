// Generated by gencpp from file iiwa_msgs/MoveAlongSplineAction.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_MOVEALONGSPLINEACTION_H
#define IIWA_MSGS_MESSAGE_MOVEALONGSPLINEACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iiwa_msgs/MoveAlongSplineActionGoal.h>
#include <iiwa_msgs/MoveAlongSplineActionResult.h>
#include <iiwa_msgs/MoveAlongSplineActionFeedback.h>

namespace iiwa_msgs
{
template <class ContainerAllocator>
struct MoveAlongSplineAction_
{
  typedef MoveAlongSplineAction_<ContainerAllocator> Type;

  MoveAlongSplineAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  MoveAlongSplineAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::iiwa_msgs::MoveAlongSplineActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::iiwa_msgs::MoveAlongSplineActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::iiwa_msgs::MoveAlongSplineActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> const> ConstPtr;

}; // struct MoveAlongSplineAction_

typedef ::iiwa_msgs::MoveAlongSplineAction_<std::allocator<void> > MoveAlongSplineAction;

typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineAction > MoveAlongSplineActionPtr;
typedef boost::shared_ptr< ::iiwa_msgs::MoveAlongSplineAction const> MoveAlongSplineActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'iiwa_msgs': ['/home/clearlab/iiwa_stack_ws/src/iiwa_stack/iiwa_msgs/msg', '/home/clearlab/iiwa_stack_ws/devel/.private/iiwa_msgs/share/iiwa_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a9cc41458c3e11a14e647ba3c0068f7";
  }

  static const char* value(const ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a9cc41458c3e11aULL;
  static const uint64_t static_value2 = 0x14e647ba3c0068f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/MoveAlongSplineAction";
  }

  static const char* value(const ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
MoveAlongSplineActionGoal action_goal\n\
MoveAlongSplineActionResult action_result\n\
MoveAlongSplineActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/MoveAlongSplineActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
MoveAlongSplineGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/MoveAlongSplineGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Goal\n\
Spline spline\n\
\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/Spline\n\
# The describes a motion along a spline\n\
\n\
SplineSegment[] segments\n\
================================================================================\n\
MSG: iiwa_msgs/SplineSegment\n\
# This message describes a segment of a spline path\n\
\n\
int32 SPL = 0\n\
int32 LIN =  1\n\
int32 CIRC = 2\n\
\n\
# The type of the spline segment\n\
int32 type\n\
\n\
# The endpoint of the current segment\n\
CartesianPose point\n\
\n\
# Auxiliary point. Only used for circular segments\n\
CartesianPose point_aux\n\
================================================================================\n\
MSG: iiwa_msgs/CartesianPose\n\
# Target Pose including redundancy information.\n\
geometry_msgs/PoseStamped poseStamped\n\
\n\
# If you have issues with the robot not executing the motion copy this value from the Cartesian Position Tab of the\n\
# robot SmartPad. Set both parameters to -1 to disable them.\n\
RedundancyInformation redundancy\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/RedundancyInformation\n\
# E1 parameter\n\
# Specifies Angle of the elbow joint.\n\
float64 e1\n\
\n\
# Status parameter\n\
#   Bit 0: 1 - The robot is working above its head\n\
#          0 - The robot is working in the ground area\n\
#   Bit 1: 1 - Angle A4 < 0°\n\
#          0 - Angle A4 >= 0°\n\
#   Bit 2: 1 - Angle A6 <= 0\n\
#          0 - Angle A6 > 0\n\
int32 status\n\
\n\
# Turn parameter\n\
# According to Sunrise handbook this is not used for the iiwa.\n\
int32 turn\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/MoveAlongSplineActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
MoveAlongSplineResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/MoveAlongSplineResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Result\n\
bool success\n\
string error\n\
\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/MoveAlongSplineActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
MoveAlongSplineFeedback feedback\n\
\n\
================================================================================\n\
MSG: iiwa_msgs/MoveAlongSplineFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Feedback\n\
\n\
";
  }

  static const char* value(const ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveAlongSplineAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::MoveAlongSplineAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveAlongSplineActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveAlongSplineActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::iiwa_msgs::MoveAlongSplineActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_MOVEALONGSPLINEACTION_H
