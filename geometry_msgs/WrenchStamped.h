#ifndef _GEOMETRY_MSGS_WRENCHSTAMPED_H
#define _GEOMETRY_MSGS_WRENCHSTAMPED_H

#include "geometry_msgs/msg/wrench_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::WrenchStamped WrenchStamped;
}

#endif // _GEOMETRY_MSGS_WRENCHSTAMPED_H
