#ifndef _GEOMETRY_MSGS_TRANSFORM_H
#define _GEOMETRY_MSGS_TRANSFORM_H

#include "geometry_msgs/msg/transform.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::Transform Transform;
}

#endif // _GEOMETRY_MSGS_TRANSFORM_H
