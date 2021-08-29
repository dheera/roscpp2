#ifndef _SENSOR_MSGS_MULTIECHOLASERSCAN_H
#define _SENSOR_MSGS_MULTIECHOLASERSCAN_H

#include "sensor_msgs/msg/multi_echo_laser_scan.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::MultiEchoLaserScan MultiEchoLaserScan;
}

#endif // _SENSOR_MSGS_MULTIECHOLASERSCAN_H
