#ifndef _SENSOR_MSGS_CAMERAINFO_H
#define _SENSOR_MSGS_CAMERAINFO_H

#include "sensor_msgs/msg/camera_info.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::CameraInfo CameraInfo;
}

#endif // _SENSOR_MSGS_CAMERAINFO_H
