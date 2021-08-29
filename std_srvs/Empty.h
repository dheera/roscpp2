#ifndef _STD_SRVS_EMPTY_H
#define _STD_SRVS_EMPTY_H

#include "std_srvs/srv/empty.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace std_srvs {
    typedef srv::Empty Empty;
}

#endif // _STD_SRVS_EMPTY_H
