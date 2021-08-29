#ifndef _NAV_MSGS_GETPLAN_H
#define _NAV_MSGS_GETPLAN_H

#include "nav_msgs/srv/get_plan.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace nav_msgs {
    typedef srv::GetPlan GetPlan;
}

#endif // _NAV_MSGS_GETPLAN_H
