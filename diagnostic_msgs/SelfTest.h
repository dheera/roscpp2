#ifndef _DIAGNOSTIC_MSGS_SELFTEST_H
#define _DIAGNOSTIC_MSGS_SELFTEST_H

#include "diagnostic_msgs/srv/self_test.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace diagnostic_msgs {
    typedef srv::SelfTest SelfTest;
}

#endif // _DIAGNOSTIC_MSGS_SELFTEST_H
