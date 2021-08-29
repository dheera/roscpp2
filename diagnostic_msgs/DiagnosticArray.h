#ifndef _DIAGNOSTIC_MSGS_DIAGNOSTICARRAY_H
#define _DIAGNOSTIC_MSGS_DIAGNOSTICARRAY_H

#include "diagnostic_msgs/msg/diagnostic_array.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace diagnostic_msgs {
    typedef msg::DiagnosticArray DiagnosticArray;
}

#endif // _DIAGNOSTIC_MSGS_DIAGNOSTICARRAY_H
