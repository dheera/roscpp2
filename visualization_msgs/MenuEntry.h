#ifndef _VISUALIZATION_MSGS_MENUENTRY_H
#define _VISUALIZATION_MSGS_MENUENTRY_H

#include "visualization_msgs/msg/menu_entry.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::MenuEntry MenuEntry;
}

#endif // _VISUALIZATION_MSGS_MENUENTRY_H
