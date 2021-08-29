#ifndef _VISUALIZATION_MSGS_IMAGEMARKER_H
#define _VISUALIZATION_MSGS_IMAGEMARKER_H

#include "visualization_msgs/msg/image_marker.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::ImageMarker ImageMarker;
}

#endif // _VISUALIZATION_MSGS_IMAGEMARKER_H
