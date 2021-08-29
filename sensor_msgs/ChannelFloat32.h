#ifndef _SENSOR_MSGS_CHANNELFLOAT32_H
#define _SENSOR_MSGS_CHANNELFLOAT32_H

#include "sensor_msgs/msg/channel_float32.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::ChannelFloat32 ChannelFloat32;
}

#endif // _SENSOR_MSGS_CHANNELFLOAT32_H
