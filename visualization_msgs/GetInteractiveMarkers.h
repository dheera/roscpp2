#ifndef _VISUALIZATION_MSGS_GETINTERACTIVEMARKERS_H
#define _VISUALIZATION_MSGS_GETINTERACTIVEMARKERS_H

#include "visualization_msgs/srv/get_interactive_markers.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace visualization_msgs {
    typedef srv::GetInteractiveMarkers GetInteractiveMarkers;
}

#endif // _VISUALIZATION_MSGS_GETINTERACTIVEMARKERS_H
