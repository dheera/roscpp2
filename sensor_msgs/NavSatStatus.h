#ifndef _SENSOR_MSGS_NAVSATSTATUS_H
#define _SENSOR_MSGS_NAVSATSTATUS_H

#include "sensor_msgs/msg/nav_sat_status.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::NavSatStatus NavSatStatus;
}

#endif // _SENSOR_MSGS_NAVSATSTATUS_H
