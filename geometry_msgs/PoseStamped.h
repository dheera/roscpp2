#ifndef _GEOMETRY_MSGS_POSESTAMPED_H
#define _GEOMETRY_MSGS_POSESTAMPED_H

#include "geometry_msgs/msg/pose_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::PoseStamped PoseStamped;
}

#endif // _GEOMETRY_MSGS_POSESTAMPED_H
