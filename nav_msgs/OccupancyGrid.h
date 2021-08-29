#ifndef _NAV_MSGS_OCCUPANCYGRID_H
#define _NAV_MSGS_OCCUPANCYGRID_H

#include "nav_msgs/msg/occupancy_grid.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace nav_msgs {
    typedef msg::OccupancyGrid OccupancyGrid;
}

#endif // _NAV_MSGS_OCCUPANCYGRID_H
