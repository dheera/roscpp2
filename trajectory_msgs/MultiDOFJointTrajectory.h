#ifndef _TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORY_H
#define _TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORY_H

#include "trajectory_msgs/msg/multi_d_o_f_joint_trajectory.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace trajectory_msgs {
    typedef msg::MultiDOFJointTrajectory MultiDOFJointTrajectory;
}

#endif // _TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORY_H
