#ifndef _GEOMETRY_MSGS_POLYGONSTAMPED_H
#define _GEOMETRY_MSGS_POLYGONSTAMPED_H

#include "geometry_msgs/msg/polygon_stamped.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace geometry_msgs {
    typedef msg::PolygonStamped PolygonStamped;
}

#endif // _GEOMETRY_MSGS_POLYGONSTAMPED_H
