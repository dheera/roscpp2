#ifndef _SENSOR_MSGS_NAVSATFIX_H
#define _SENSOR_MSGS_NAVSATFIX_H

#include "sensor_msgs/msg/nav_sat_fix.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::NavSatFix NavSatFix;
}

#endif // _SENSOR_MSGS_NAVSATFIX_H
