#ifndef _NAV_MSGS_ODOMETRY_H
#define _NAV_MSGS_ODOMETRY_H

#include "nav_msgs/msg/odometry.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace nav_msgs {
    typedef msg::Odometry Odometry;
}

#endif // _NAV_MSGS_ODOMETRY_H
