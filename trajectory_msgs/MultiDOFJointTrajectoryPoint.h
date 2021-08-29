#ifndef _TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_H
#define _TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_H

#include "trajectory_msgs/msg/multi_d_o_f_joint_trajectory_point.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace trajectory_msgs {
    typedef msg::MultiDOFJointTrajectoryPoint MultiDOFJointTrajectoryPoint;
}

#endif // _TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_H
