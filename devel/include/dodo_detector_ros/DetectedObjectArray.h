// Generated by gencpp from file dodo_detector_ros/DetectedObjectArray.msg
// DO NOT EDIT!


#ifndef DODO_DETECTOR_ROS_MESSAGE_DETECTEDOBJECTARRAY_H
#define DODO_DETECTOR_ROS_MESSAGE_DETECTEDOBJECTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <dodo_detector_ros/DetectedObject.h>

namespace dodo_detector_ros
{
template <class ContainerAllocator>
struct DetectedObjectArray_
{
  typedef DetectedObjectArray_<ContainerAllocator> Type;

  DetectedObjectArray_()
    : header()
    , detected_objects()  {
    }
  DetectedObjectArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detected_objects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::dodo_detector_ros::DetectedObject_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dodo_detector_ros::DetectedObject_<ContainerAllocator> >::other >  _detected_objects_type;
  _detected_objects_type detected_objects;





  typedef boost::shared_ptr< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedObjectArray_

typedef ::dodo_detector_ros::DetectedObjectArray_<std::allocator<void> > DetectedObjectArray;

typedef boost::shared_ptr< ::dodo_detector_ros::DetectedObjectArray > DetectedObjectArrayPtr;
typedef boost::shared_ptr< ::dodo_detector_ros::DetectedObjectArray const> DetectedObjectArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator1> & lhs, const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detected_objects == rhs.detected_objects;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator1> & lhs, const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dodo_detector_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cfb00e28c707bcf2e4252c82ba9b0d6c";
  }

  static const char* value(const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcfb00e28c707bcf2ULL;
  static const uint64_t static_value2 = 0xe4252c82ba9b0d6cULL;
};

template<class ContainerAllocator>
struct DataType< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dodo_detector_ros/DetectedObjectArray";
  }

  static const char* value(const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"dodo_detector_ros/DetectedObject[] detected_objects\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: dodo_detector_ros/DetectedObject\n"
"std_msgs/String type\n"
"std_msgs/String tf_id\n"
"std_msgs/Int32 image_x\n"
"std_msgs/Int32 image_y\n"
"std_msgs/Int32 image_height\n"
"std_msgs/Int32 image_width\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Int32\n"
"int32 data\n"
;
  }

  static const char* value(const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detected_objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedObjectArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dodo_detector_ros::DetectedObjectArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detected_objects[]" << std::endl;
    for (size_t i = 0; i < v.detected_objects.size(); ++i)
    {
      s << indent << "  detected_objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dodo_detector_ros::DetectedObject_<ContainerAllocator> >::stream(s, indent + "    ", v.detected_objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DODO_DETECTOR_ROS_MESSAGE_DETECTEDOBJECTARRAY_H