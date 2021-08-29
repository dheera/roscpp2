#ifndef _GEOMETRY_MSGS_POSEWITHCOVARIANCE_H
#define _GEOMETRY_MSGS_POSEWITHCOVARIANCE_H

#include "geometry_msgs/msg/pose_with_covariance.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::PoseWithCovariance PoseWithCovariance;
}

#endif // _GEOMETRY_MSGS_POSEWITHCOVARIANCE_H
