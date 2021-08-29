#ifndef _STD_MSGS_MULTIARRAYLAYOUT_H
#define _STD_MSGS_MULTIARRAYLAYOUT_H

#include "std_msgs/msg/multi_array_layout.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace std_msgs {
    typedef msg::MultiArrayLayout MultiArrayLayout;
}

#endif // _STD_MSGS_MULTIARRAYLAYOUT_H
