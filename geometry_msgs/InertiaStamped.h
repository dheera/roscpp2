#ifndef _GEOMETRY_MSGS_INERTIASTAMPED_H
#define _GEOMETRY_MSGS_INERTIASTAMPED_H

#include "geometry_msgs/msg/inertia_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::InertiaStamped InertiaStamped;
}

#endif // _GEOMETRY_MSGS_INERTIASTAMPED_H
