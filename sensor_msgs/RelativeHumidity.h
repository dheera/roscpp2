#ifndef _SENSOR_MSGS_RELATIVEHUMIDITY_H
#define _SENSOR_MSGS_RELATIVEHUMIDITY_H

#include "sensor_msgs/msg/relative_humidity.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::RelativeHumidity RelativeHumidity;
}

#endif // _SENSOR_MSGS_RELATIVEHUMIDITY_H
