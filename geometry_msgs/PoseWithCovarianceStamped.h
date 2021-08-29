#ifndef _GEOMETRY_MSGS_POSEWITHCOVARIANCESTAMPED_H
#define _GEOMETRY_MSGS_POSEWITHCOVARIANCESTAMPED_H

#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::PoseWithCovarianceStamped PoseWithCovarianceStamped;
}

#endif // _GEOMETRY_MSGS_POSEWITHCOVARIANCESTAMPED_H
