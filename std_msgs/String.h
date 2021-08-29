#ifndef _STD_MSGS_STRING_H
#define _STD_MSGS_STRING_H

#include "std_msgs/msg/string.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::String String;
}

#endif // _STD_MSGS_STRING_H
