#ifndef _GEOMETRY_MSGS_VECTOR3_H
#define _GEOMETRY_MSGS_VECTOR3_H

#include "geometry_msgs/msg/vector3.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::Vector3 Vector3;
}

#endif // _GEOMETRY_MSGS_VECTOR3_H
