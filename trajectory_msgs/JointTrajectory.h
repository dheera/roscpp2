#ifndef _TRAJECTORY_MSGS_JOINTTRAJECTORY_H
#define _TRAJECTORY_MSGS_JOINTTRAJECTORY_H

#include "trajectory_msgs/msg/joint_trajectory.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace trajectory_msgs {
    typedef msg::JointTrajectory JointTrajectory;
}

#endif // _TRAJECTORY_MSGS_JOINTTRAJECTORY_H
