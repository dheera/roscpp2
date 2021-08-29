#ifndef _VISUALIZATION_MSGS_UVCOORDINATE_H
#define _VISUALIZATION_MSGS_UVCOORDINATE_H

#include "visualization_msgs/msg/u_v_coordinate.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::UVCoordinate UVCoordinate;
}

#endif // _VISUALIZATION_MSGS_UVCOORDINATE_H
