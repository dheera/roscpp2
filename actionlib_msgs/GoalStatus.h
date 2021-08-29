#ifndef _ACTIONLIB_MSGS_GOALSTATUS_H
#define _ACTIONLIB_MSGS_GOALSTATUS_H

#include "actionlib_msgs/msg/goal_status.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace actionlib_msgs {
    typedef msg::GoalStatus GoalStatus;
}

#endif // _ACTIONLIB_MSGS_GOALSTATUS_H
