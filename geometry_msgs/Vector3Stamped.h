#ifndef _GEOMETRY_MSGS_VECTOR3STAMPED_H
#define _GEOMETRY_MSGS_VECTOR3STAMPED_H

#include "geometry_msgs/msg/vector3_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::Vector3Stamped Vector3Stamped;
}

#endif // _GEOMETRY_MSGS_VECTOR3STAMPED_H
