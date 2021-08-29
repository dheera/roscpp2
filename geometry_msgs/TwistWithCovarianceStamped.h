#ifndef _GEOMETRY_MSGS_TWISTWITHCOVARIANCESTAMPED_H
#define _GEOMETRY_MSGS_TWISTWITHCOVARIANCESTAMPED_H

#include "geometry_msgs/msg/twist_with_covariance_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::TwistWithCovarianceStamped TwistWithCovarianceStamped;
}

#endif // _GEOMETRY_MSGS_TWISTWITHCOVARIANCESTAMPED_H
