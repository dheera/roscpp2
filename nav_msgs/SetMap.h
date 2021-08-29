#ifndef _NAV_MSGS_SETMAP_H
#define _NAV_MSGS_SETMAP_H

#include "nav_msgs/srv/set_map.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace nav_msgs {
    typedef srv::SetMap SetMap;
}

#endif // _NAV_MSGS_SETMAP_H
