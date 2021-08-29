#ifndef _NAV_MSGS_PATH_H
#define _NAV_MSGS_PATH_H

#include "nav_msgs/msg/path.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace nav_msgs {
    typedef msg::Path Path;
}

#endif // _NAV_MSGS_PATH_H
