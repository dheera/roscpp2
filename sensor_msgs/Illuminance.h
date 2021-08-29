#ifndef _SENSOR_MSGS_ILLUMINANCE_H
#define _SENSOR_MSGS_ILLUMINANCE_H

#include "sensor_msgs/msg/illuminance.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::Illuminance Illuminance;
}

#endif // _SENSOR_MSGS_ILLUMINANCE_H
