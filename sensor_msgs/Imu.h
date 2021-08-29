#ifndef _SENSOR_MSGS_IMU_H
#define _SENSOR_MSGS_IMU_H

#include "sensor_msgs/msg/imu.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::Imu Imu;
}

#endif // _SENSOR_MSGS_IMU_H
