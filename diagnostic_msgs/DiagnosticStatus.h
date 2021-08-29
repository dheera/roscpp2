#ifndef _DIAGNOSTIC_MSGS_DIAGNOSTICSTATUS_H
#define _DIAGNOSTIC_MSGS_DIAGNOSTICSTATUS_H

#include "diagnostic_msgs/msg/diagnostic_status.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace diagnostic_msgs {
    typedef msg::DiagnosticStatus DiagnosticStatus;
}

#endif // _DIAGNOSTIC_MSGS_DIAGNOSTICSTATUS_H
