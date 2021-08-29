#ifndef _SENSOR_MSGS_POINTCLOUD_H
#define _SENSOR_MSGS_POINTCLOUD_H

#include "sensor_msgs/msg/point_cloud.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::PointCloud PointCloud;
}

#endif // _SENSOR_MSGS_POINTCLOUD_H
