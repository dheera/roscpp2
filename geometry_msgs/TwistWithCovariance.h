#ifndef _GEOMETRY_MSGS_TWISTWITHCOVARIANCE_H
#define _GEOMETRY_MSGS_TWISTWITHCOVARIANCE_H

#include "geometry_msgs/msg/twist_with_covariance.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::TwistWithCovariance TwistWithCovariance;
}

#endif // _GEOMETRY_MSGS_TWISTWITHCOVARIANCE_H
