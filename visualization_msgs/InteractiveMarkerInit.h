#ifndef _VISUALIZATION_MSGS_INTERACTIVEMARKERINIT_H
#define _VISUALIZATION_MSGS_INTERACTIVEMARKERINIT_H

#include "visualization_msgs/msg/interactive_marker_init.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::InteractiveMarkerInit InteractiveMarkerInit;
}

#endif // _VISUALIZATION_MSGS_INTERACTIVEMARKERINIT_H
