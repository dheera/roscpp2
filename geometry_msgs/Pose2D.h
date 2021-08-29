#ifndef _GEOMETRY_MSGS_POSE2D_H
#define _GEOMETRY_MSGS_POSE2D_H

#include "geometry_msgs/msg/pose2_d.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::Pose2D Pose2D;
}

#endif // _GEOMETRY_MSGS_POSE2D_H
