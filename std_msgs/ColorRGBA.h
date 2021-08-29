#ifndef _STD_MSGS_COLORRGBA_H
#define _STD_MSGS_COLORRGBA_H

#include "std_msgs/msg/color_r_g_b_a.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::ColorRGBA ColorRGBA;
}

#endif // _STD_MSGS_COLORRGBA_H
