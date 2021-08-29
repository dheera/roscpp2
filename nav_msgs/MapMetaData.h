#ifndef _NAV_MSGS_MAPMETADATA_H
#define _NAV_MSGS_MAPMETADATA_H

#include "nav_msgs/msg/map_meta_data.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace nav_msgs {
    typedef msg::MapMetaData MapMetaData;
}

#endif // _NAV_MSGS_MAPMETADATA_H
