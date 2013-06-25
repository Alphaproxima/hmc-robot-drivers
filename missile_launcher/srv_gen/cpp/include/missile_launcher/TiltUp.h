/* Auto-generated by genmsg_cpp for file /home/robot/rosbots/hmc-robot-drivers/missile_launcher/srv/TiltUp.srv */
#ifndef MISSILE_LAUNCHER_SERVICE_TILTUP_H
#define MISSILE_LAUNCHER_SERVICE_TILTUP_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace missile_launcher
{
template <class ContainerAllocator>
struct TiltUpRequest_ {
  typedef TiltUpRequest_<ContainerAllocator> Type;

  TiltUpRequest_()
  {
  }

  TiltUpRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::missile_launcher::TiltUpRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::TiltUpRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TiltUpRequest
typedef  ::missile_launcher::TiltUpRequest_<std::allocator<void> > TiltUpRequest;

typedef boost::shared_ptr< ::missile_launcher::TiltUpRequest> TiltUpRequestPtr;
typedef boost::shared_ptr< ::missile_launcher::TiltUpRequest const> TiltUpRequestConstPtr;


template <class ContainerAllocator>
struct TiltUpResponse_ {
  typedef TiltUpResponse_<ContainerAllocator> Type;

  TiltUpResponse_()
  : success(false)
  {
  }

  TiltUpResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::missile_launcher::TiltUpResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::TiltUpResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TiltUpResponse
typedef  ::missile_launcher::TiltUpResponse_<std::allocator<void> > TiltUpResponse;

typedef boost::shared_ptr< ::missile_launcher::TiltUpResponse> TiltUpResponsePtr;
typedef boost::shared_ptr< ::missile_launcher::TiltUpResponse const> TiltUpResponseConstPtr;

struct TiltUp
{

typedef TiltUpRequest Request;
typedef TiltUpResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct TiltUp
} // namespace missile_launcher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltUpRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltUpRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::TiltUpRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::missile_launcher::TiltUpRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::TiltUpRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltUpRequest";
  }

  static const char* value(const  ::missile_launcher::TiltUpRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::TiltUpRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::missile_launcher::TiltUpRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::TiltUpRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltUpResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltUpResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::TiltUpResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::missile_launcher::TiltUpResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::TiltUpResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltUpResponse";
  }

  static const char* value(const  ::missile_launcher::TiltUpResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::TiltUpResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::missile_launcher::TiltUpResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::TiltUpResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::TiltUpRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TiltUpRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::TiltUpResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TiltUpResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<missile_launcher::TiltUp> {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::TiltUp&) { return value(); } 
};

template<>
struct DataType<missile_launcher::TiltUp> {
  static const char* value() 
  {
    return "missile_launcher/TiltUp";
  }

  static const char* value(const missile_launcher::TiltUp&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::TiltUpRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::TiltUpRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::TiltUpRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltUp";
  }

  static const char* value(const missile_launcher::TiltUpRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::TiltUpResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::TiltUpResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::TiltUpResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltUp";
  }

  static const char* value(const missile_launcher::TiltUpResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MISSILE_LAUNCHER_SERVICE_TILTUP_H
