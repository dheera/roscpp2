#ifndef _SENSOR_MSGS_JOINTSTATE_H
#define _SENSOR_MSGS_JOINTSTATE_H

#include "sensor_msgs/msg/joint_state.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::JointState JointState;
}

#endif // _SENSOR_MSGS_JOINTSTATE_H
