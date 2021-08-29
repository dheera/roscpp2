#ifndef _STD_MSGS_EMPTY_H
#define _STD_MSGS_EMPTY_H

#include "std_msgs/msg/empty.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::Empty Empty;
}

#endif // _STD_MSGS_EMPTY_H
