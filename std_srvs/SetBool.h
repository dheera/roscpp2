#ifndef _STD_SRVS_SETBOOL_H
#define _STD_SRVS_SETBOOL_H

#include "std_srvs/srv/set_bool.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace std_srvs {
    typedef srv::SetBool SetBool;
}

#endif // _STD_SRVS_SETBOOL_H
