#ifndef _STD_MSGS_HEADER_H
#define _STD_MSGS_HEADER_H

#include "std_msgs/msg/header.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::Header Header;
}

#endif // _STD_MSGS_HEADER_H
