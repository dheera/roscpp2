#ifndef _GEOMETRY_MSGS_QUATERNIONSTAMPED_H
#define _GEOMETRY_MSGS_QUATERNIONSTAMPED_H

#include "geometry_msgs/msg/quaternion_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::QuaternionStamped QuaternionStamped;
}

#endif // _GEOMETRY_MSGS_QUATERNIONSTAMPED_H
