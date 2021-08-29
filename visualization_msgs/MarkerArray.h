#ifndef _VISUALIZATION_MSGS_MARKERARRAY_H
#define _VISUALIZATION_MSGS_MARKERARRAY_H

#include "visualization_msgs/msg/marker_array.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::MarkerArray MarkerArray;
}

#endif // _VISUALIZATION_MSGS_MARKERARRAY_H
