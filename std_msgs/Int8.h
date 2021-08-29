#ifndef _STD_MSGS_INT8_H
#define _STD_MSGS_INT8_H

#include "std_msgs/msg/int8.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::Int8 Int8;
}

#endif // _STD_MSGS_INT8_H
