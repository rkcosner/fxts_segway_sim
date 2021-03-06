// Generated by gencpp from file segway_sim/uiRequest.msg
// DO NOT EDIT!


#ifndef SEGWAY_SIM_MESSAGE_UIREQUEST_H
#define SEGWAY_SIM_MESSAGE_UIREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace segway_sim
{
template <class ContainerAllocator>
struct uiRequest_
{
  typedef uiRequest_<ContainerAllocator> Type;

  uiRequest_()
    : cmd(0)
    , data()  {
    }
  uiRequest_(const ContainerAllocator& _alloc)
    : cmd(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _cmd_type;
  _cmd_type cmd;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::segway_sim::uiRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_sim::uiRequest_<ContainerAllocator> const> ConstPtr;

}; // struct uiRequest_

typedef ::segway_sim::uiRequest_<std::allocator<void> > uiRequest;

typedef boost::shared_ptr< ::segway_sim::uiRequest > uiRequestPtr;
typedef boost::shared_ptr< ::segway_sim::uiRequest const> uiRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_sim::uiRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_sim::uiRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::segway_sim::uiRequest_<ContainerAllocator1> & lhs, const ::segway_sim::uiRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::segway_sim::uiRequest_<ContainerAllocator1> & lhs, const ::segway_sim::uiRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace segway_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::uiRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_sim::uiRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::uiRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_sim::uiRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::uiRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_sim::uiRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_sim::uiRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e329d22f437d415184a579ed0e72f8c0";
  }

  static const char* value(const ::segway_sim::uiRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe329d22f437d4151ULL;
  static const uint64_t static_value2 = 0x84a579ed0e72f8c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_sim::uiRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_sim/uiRequest";
  }

  static const char* value(const ::segway_sim::uiRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_sim::uiRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 cmd\n"
"float64[] data\n"
;
  }

  static const char* value(const ::segway_sim::uiRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_sim::uiRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct uiRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_sim::uiRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_sim::uiRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_SIM_MESSAGE_UIREQUEST_H
