#ifndef _SHAPE_MSGS_PLANE_H
#define _SHAPE_MSGS_PLANE_H

#include "shape_msgs/msg/plane.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace shape_msgs {
    typedef msg::Plane Plane;
}

#endif // _SHAPE_MSGS_PLANE_H
