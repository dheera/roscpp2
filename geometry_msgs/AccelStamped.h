#ifndef _GEOMETRY_MSGS_ACCELSTAMPED_H
#define _GEOMETRY_MSGS_ACCELSTAMPED_H

#include "geometry_msgs/msg/accel_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::AccelStamped AccelStamped;
}

#endif // _GEOMETRY_MSGS_ACCELSTAMPED_H
