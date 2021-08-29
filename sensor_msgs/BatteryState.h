#ifndef _SENSOR_MSGS_BATTERYSTATE_H
#define _SENSOR_MSGS_BATTERYSTATE_H

#include "sensor_msgs/msg/battery_state.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::BatteryState BatteryState;
}

#endif // _SENSOR_MSGS_BATTERYSTATE_H
