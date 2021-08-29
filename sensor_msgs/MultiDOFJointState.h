#ifndef _SENSOR_MSGS_MULTIDOFJOINTSTATE_H
#define _SENSOR_MSGS_MULTIDOFJOINTSTATE_H

#include "sensor_msgs/msg/multi_d_o_f_joint_state.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::MultiDOFJointState MultiDOFJointState;
}

#endif // _SENSOR_MSGS_MULTIDOFJOINTSTATE_H
