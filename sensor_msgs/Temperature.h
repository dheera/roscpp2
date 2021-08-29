#ifndef _SENSOR_MSGS_TEMPERATURE_H
#define _SENSOR_MSGS_TEMPERATURE_H

#include "sensor_msgs/msg/temperature.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::Temperature Temperature;
}

#endif // _SENSOR_MSGS_TEMPERATURE_H
