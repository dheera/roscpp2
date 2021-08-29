#ifndef _STD_MSGS_FLOAT32_H
#define _STD_MSGS_FLOAT32_H

#include "std_msgs/msg/float32.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::Float32 Float32;
}

#endif // _STD_MSGS_FLOAT32_H
