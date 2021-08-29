#ifndef _DIAGNOSTIC_MSGS_KEYVALUE_H
#define _DIAGNOSTIC_MSGS_KEYVALUE_H

#include "diagnostic_msgs/msg/key_value.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace diagnostic_msgs {
    typedef msg::KeyValue KeyValue;
}

#endif // _DIAGNOSTIC_MSGS_KEYVALUE_H
