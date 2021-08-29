#ifndef _SENSOR_MSGS_SETCAMERAINFO_H
#define _SENSOR_MSGS_SETCAMERAINFO_H

#include "sensor_msgs/srv/set_camera_info.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace sensor_msgs {
    typedef srv::SetCameraInfo SetCameraInfo;
}

#endif // _SENSOR_MSGS_SETCAMERAINFO_H
