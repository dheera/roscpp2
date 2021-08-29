#ifndef _DIAGNOSTIC_MSGS_ADDDIAGNOSTICS_H
#define _DIAGNOSTIC_MSGS_ADDDIAGNOSTICS_H

#include "diagnostic_msgs/srv/add_diagnostics.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace diagnostic_msgs {
    typedef srv::AddDiagnostics AddDiagnostics;
}

#endif // _DIAGNOSTIC_MSGS_ADDDIAGNOSTICS_H
