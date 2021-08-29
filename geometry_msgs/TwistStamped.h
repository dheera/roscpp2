#ifndef _GEOMETRY_MSGS_TWISTSTAMPED_H
#define _GEOMETRY_MSGS_TWISTSTAMPED_H

#include "geometry_msgs/msg/twist_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::TwistStamped TwistStamped;
}

#endif // _GEOMETRY_MSGS_TWISTSTAMPED_H
