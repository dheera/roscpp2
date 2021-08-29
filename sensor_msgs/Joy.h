#ifndef _SENSOR_MSGS_JOY_H
#define _SENSOR_MSGS_JOY_H

#include "sensor_msgs/msg/joy.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::Joy Joy;
}

#endif // _SENSOR_MSGS_JOY_H
