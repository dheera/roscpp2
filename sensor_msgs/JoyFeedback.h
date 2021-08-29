#ifndef _SENSOR_MSGS_JOYFEEDBACK_H
#define _SENSOR_MSGS_JOYFEEDBACK_H

#include "sensor_msgs/msg/joy_feedback.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::JoyFeedback JoyFeedback;
}

#endif // _SENSOR_MSGS_JOYFEEDBACK_H
