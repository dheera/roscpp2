#ifndef _STD_SRVS_TRIGGER_H
#define _STD_SRVS_TRIGGER_H

#include "std_srvs/srv/trigger.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace std_srvs {
    typedef srv::Trigger Trigger;
}

#endif // _STD_SRVS_TRIGGER_H
