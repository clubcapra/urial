// Generated by gencpp from file vectornav/utc_time.msg
// DO NOT EDIT!


#ifndef VECTORNAV_MESSAGE_UTC_TIME_H
#define VECTORNAV_MESSAGE_UTC_TIME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vectornav
{
template <class ContainerAllocator>
struct utc_time_
{
  typedef utc_time_<ContainerAllocator> Type;

  utc_time_()
    : year(0)
    , month(0)
    , day(0)
    , hour(0)
    , minute(0)
    , second(0)
    , millisecond(0)  {
    }
  utc_time_(const ContainerAllocator& _alloc)
    : year(0)
    , month(0)
    , day(0)
    , hour(0)
    , minute(0)
    , second(0)
    , millisecond(0)  {
  (void)_alloc;
    }



   typedef uint8_t _year_type;
  _year_type year;

   typedef uint8_t _month_type;
  _month_type month;

   typedef uint8_t _day_type;
  _day_type day;

   typedef uint8_t _hour_type;
  _hour_type hour;

   typedef uint8_t _minute_type;
  _minute_type minute;

   typedef uint8_t _second_type;
  _second_type second;

   typedef uint16_t _millisecond_type;
  _millisecond_type millisecond;




  typedef boost::shared_ptr< ::vectornav::utc_time_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vectornav::utc_time_<ContainerAllocator> const> ConstPtr;

}; // struct utc_time_

typedef ::vectornav::utc_time_<std::allocator<void> > utc_time;

typedef boost::shared_ptr< ::vectornav::utc_time > utc_timePtr;
typedef boost::shared_ptr< ::vectornav::utc_time const> utc_timeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vectornav::utc_time_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vectornav::utc_time_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vectornav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'vectornav': ['/home/capra/capra/src/vectornav/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vectornav::utc_time_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vectornav::utc_time_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vectornav::utc_time_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vectornav::utc_time_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vectornav::utc_time_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vectornav::utc_time_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vectornav::utc_time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c5364f7d779a45ceab890115aa08581e";
  }

  static const char* value(const ::vectornav::utc_time_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc5364f7d779a45ceULL;
  static const uint64_t static_value2 = 0xab890115aa08581eULL;
};

template<class ContainerAllocator>
struct DataType< ::vectornav::utc_time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vectornav/utc_time";
  }

  static const char* value(const ::vectornav::utc_time_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vectornav::utc_time_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 year\n\
uint8 month\n\
uint8 day\n\
uint8 hour\n\
uint8 minute\n\
uint8 second\n\
uint16 millisecond\n\
";
  }

  static const char* value(const ::vectornav::utc_time_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vectornav::utc_time_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.year);
      stream.next(m.month);
      stream.next(m.day);
      stream.next(m.hour);
      stream.next(m.minute);
      stream.next(m.second);
      stream.next(m.millisecond);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct utc_time_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vectornav::utc_time_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vectornav::utc_time_<ContainerAllocator>& v)
  {
    s << indent << "year: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.year);
    s << indent << "month: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.month);
    s << indent << "day: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.day);
    s << indent << "hour: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hour);
    s << indent << "minute: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.minute);
    s << indent << "second: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.second);
    s << indent << "millisecond: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.millisecond);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VECTORNAV_MESSAGE_UTC_TIME_H