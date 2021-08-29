#ifndef _GEOMETRY_MSGS_ACCEL_H
#define _GEOMETRY_MSGS_ACCEL_H

#include "geometry_msgs/msg/accel.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::Accel Accel;
}

#endif // _GEOMETRY_MSGS_ACCEL_H
