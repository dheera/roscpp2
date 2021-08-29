#ifndef _GEOMETRY_MSGS_POINTSTAMPED_H
#define _GEOMETRY_MSGS_POINTSTAMPED_H

#include "geometry_msgs/msg/point_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::PointStamped PointStamped;
}

#endif // _GEOMETRY_MSGS_POINTSTAMPED_H
