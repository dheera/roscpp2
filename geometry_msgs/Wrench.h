#ifndef _GEOMETRY_MSGS_WRENCH_H
#define _GEOMETRY_MSGS_WRENCH_H

#include "geometry_msgs/msg/wrench.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::Wrench Wrench;
}

#endif // _GEOMETRY_MSGS_WRENCH_H
