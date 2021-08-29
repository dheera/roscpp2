#ifndef _SENSOR_MSGS_FLUIDPRESSURE_H
#define _SENSOR_MSGS_FLUIDPRESSURE_H

#include "sensor_msgs/msg/fluid_pressure.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::FluidPressure FluidPressure;
}

#endif // _SENSOR_MSGS_FLUIDPRESSURE_H
