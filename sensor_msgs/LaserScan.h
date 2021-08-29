#ifndef _SENSOR_MSGS_LASERSCAN_H
#define _SENSOR_MSGS_LASERSCAN_H

#include "sensor_msgs/msg/laser_scan.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::LaserScan LaserScan;
}

#endif // _SENSOR_MSGS_LASERSCAN_H
