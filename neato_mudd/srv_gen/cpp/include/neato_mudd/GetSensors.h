/* Auto-generated by genmsg_cpp for file /home/robotics/ros_workspace/hmc-robot-drivers/neato_mudd/srv/GetSensors.srv */
#ifndef NEATO_MUDD_SERVICE_GETSENSORS_H
#define NEATO_MUDD_SERVICE_GETSENSORS_H
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




namespace neato_mudd
{
template <class ContainerAllocator>
struct GetSensorsRequest_ {
  typedef GetSensorsRequest_<ContainerAllocator> Type;

  GetSensorsRequest_()
  {
  }

  GetSensorsRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neato_mudd::GetSensorsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetSensorsRequest
typedef  ::neato_mudd::GetSensorsRequest_<std::allocator<void> > GetSensorsRequest;

typedef boost::shared_ptr< ::neato_mudd::GetSensorsRequest> GetSensorsRequestPtr;
typedef boost::shared_ptr< ::neato_mudd::GetSensorsRequest const> GetSensorsRequestConstPtr;


template <class ContainerAllocator>
struct GetSensorsResponse_ {
  typedef GetSensorsResponse_<ContainerAllocator> Type;

  GetSensorsResponse_()
  : Value(0)
  {
  }

  GetSensorsResponse_(const ContainerAllocator& _alloc)
  : Value(0)
  {
  }

  typedef int64_t _Value_type;
  int64_t Value;


  typedef boost::shared_ptr< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::neato_mudd::GetSensorsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetSensorsResponse
typedef  ::neato_mudd::GetSensorsResponse_<std::allocator<void> > GetSensorsResponse;

typedef boost::shared_ptr< ::neato_mudd::GetSensorsResponse> GetSensorsResponsePtr;
typedef boost::shared_ptr< ::neato_mudd::GetSensorsResponse const> GetSensorsResponseConstPtr;

struct GetSensors
{

typedef GetSensorsRequest Request;
typedef GetSensorsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetSensors
} // namespace neato_mudd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetSensorsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::neato_mudd::GetSensorsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetSensorsRequest";
  }

  static const char* value(const  ::neato_mudd::GetSensorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::neato_mudd::GetSensorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::neato_mudd::GetSensorsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const  ::neato_mudd::GetSensorsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc4eaea9f91ff0a22ULL;
  static const uint64_t static_value2 = 0xd886aaa44e9be3bfULL;
};

template<class ContainerAllocator>
struct DataType< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetSensorsResponse";
  }

  static const char* value(const  ::neato_mudd::GetSensorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 Value\n\
\n\
\n\
";
  }

  static const char* value(const  ::neato_mudd::GetSensorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::neato_mudd::GetSensorsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetSensorsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::neato_mudd::GetSensorsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetSensorsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<neato_mudd::GetSensors> {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const neato_mudd::GetSensors&) { return value(); } 
};

template<>
struct DataType<neato_mudd::GetSensors> {
  static const char* value() 
  {
    return "neato_mudd/GetSensors";
  }

  static const char* value(const neato_mudd::GetSensors&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<neato_mudd::GetSensorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const neato_mudd::GetSensorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<neato_mudd::GetSensorsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetSensors";
  }

  static const char* value(const neato_mudd::GetSensorsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<neato_mudd::GetSensorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c4eaea9f91ff0a22d886aaa44e9be3bf";
  }

  static const char* value(const neato_mudd::GetSensorsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<neato_mudd::GetSensorsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "neato_mudd/GetSensors";
  }

  static const char* value(const neato_mudd::GetSensorsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // NEATO_MUDD_SERVICE_GETSENSORS_H

