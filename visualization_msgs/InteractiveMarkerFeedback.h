#ifndef _VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_H
#define _VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_H

#include "visualization_msgs/msg/interactive_marker_feedback.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::InteractiveMarkerFeedback InteractiveMarkerFeedback;
}

#endif // _VISUALIZATION_MSGS_INTERACTIVEMARKERFEEDBACK_H
