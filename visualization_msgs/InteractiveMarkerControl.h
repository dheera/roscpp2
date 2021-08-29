#ifndef _VISUALIZATION_MSGS_INTERACTIVEMARKERCONTROL_H
#define _VISUALIZATION_MSGS_INTERACTIVEMARKERCONTROL_H

#include "visualization_msgs/msg/interactive_marker_control.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::InteractiveMarkerControl InteractiveMarkerControl;
}

#endif // _VISUALIZATION_MSGS_INTERACTIVEMARKERCONTROL_H
