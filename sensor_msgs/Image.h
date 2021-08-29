#ifndef _SENSOR_MSGS_IMAGE_H
#define _SENSOR_MSGS_IMAGE_H

#include "sensor_msgs/msg/image.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::Image Image;
}

#endif // _SENSOR_MSGS_IMAGE_H
