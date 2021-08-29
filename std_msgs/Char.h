#ifndef _STD_MSGS_CHAR_H
#define _STD_MSGS_CHAR_H

#include "std_msgs/msg/char.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::Char Char;
}

#endif // _STD_MSGS_CHAR_H
