#ifndef _VISUALIZATION_MSGS_MESHFILE_H
#define _VISUALIZATION_MSGS_MESHFILE_H

#include "visualization_msgs/msg/mesh_file.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace visualization_msgs {
    typedef msg::MeshFile MeshFile;
}

#endif // _VISUALIZATION_MSGS_MESHFILE_H
