#ifndef _NAV_MSGS_GRIDCELLS_H
#define _NAV_MSGS_GRIDCELLS_H

#include "nav_msgs/msg/grid_cells.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace nav_msgs {
    typedef msg::GridCells GridCells;
}

#endif // _NAV_MSGS_GRIDCELLS_H
