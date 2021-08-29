#ifndef _STD_MSGS_FLOAT64_H
#define _STD_MSGS_FLOAT64_H

#include "std_msgs/msg/float64.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::Float64 Float64;
}

#endif // _STD_MSGS_FLOAT64_H
