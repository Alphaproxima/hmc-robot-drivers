/* Auto-generated by genmsg_cpp for file /home/robot/rosbots/hmc-robot-drivers/missile_launcher/srv/TiltDown.srv */
#ifndef MISSILE_LAUNCHER_SERVICE_TILTDOWN_H
#define MISSILE_LAUNCHER_SERVICE_TILTDOWN_H
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
struct TiltDownRequest_ {
  typedef TiltDownRequest_<ContainerAllocator> Type;

  TiltDownRequest_()
  {
  }

  TiltDownRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::missile_launcher::TiltDownRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::TiltDownRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TiltDownRequest
typedef  ::missile_launcher::TiltDownRequest_<std::allocator<void> > TiltDownRequest;

typedef boost::shared_ptr< ::missile_launcher::TiltDownRequest> TiltDownRequestPtr;
typedef boost::shared_ptr< ::missile_launcher::TiltDownRequest const> TiltDownRequestConstPtr;


template <class ContainerAllocator>
struct TiltDownResponse_ {
  typedef TiltDownResponse_<ContainerAllocator> Type;

  TiltDownResponse_()
  : success(false)
  {
  }

  TiltDownResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::missile_launcher::TiltDownResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::missile_launcher::TiltDownResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TiltDownResponse
typedef  ::missile_launcher::TiltDownResponse_<std::allocator<void> > TiltDownResponse;

typedef boost::shared_ptr< ::missile_launcher::TiltDownResponse> TiltDownResponsePtr;
typedef boost::shared_ptr< ::missile_launcher::TiltDownResponse const> TiltDownResponseConstPtr;

struct TiltDown
{

typedef TiltDownRequest Request;
typedef TiltDownResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct TiltDown
} // namespace missile_launcher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltDownRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltDownRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::TiltDownRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::missile_launcher::TiltDownRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::TiltDownRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltDownRequest";
  }

  static const char* value(const  ::missile_launcher::TiltDownRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::TiltDownRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::missile_launcher::TiltDownRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::TiltDownRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltDownResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::missile_launcher::TiltDownResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::missile_launcher::TiltDownResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::missile_launcher::TiltDownResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::missile_launcher::TiltDownResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltDownResponse";
  }

  static const char* value(const  ::missile_launcher::TiltDownResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::missile_launcher::TiltDownResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::missile_launcher::TiltDownResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::missile_launcher::TiltDownResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::TiltDownRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TiltDownRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::missile_launcher::TiltDownResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TiltDownResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<missile_launcher::TiltDown> {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::TiltDown&) { return value(); } 
};

template<>
struct DataType<missile_launcher::TiltDown> {
  static const char* value() 
  {
    return "missile_launcher/TiltDown";
  }

  static const char* value(const missile_launcher::TiltDown&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::TiltDownRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::TiltDownRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::TiltDownRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltDown";
  }

  static const char* value(const missile_launcher::TiltDownRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<missile_launcher::TiltDownResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const missile_launcher::TiltDownResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<missile_launcher::TiltDownResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "missile_launcher/TiltDown";
  }

  static const char* value(const missile_launcher::TiltDownResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MISSILE_LAUNCHER_SERVICE_TILTDOWN_H
