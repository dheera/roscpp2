#ifndef _SHAPE_MSGS_MESHTRIANGLE_H
#define _SHAPE_MSGS_MESHTRIANGLE_H

#include "shape_msgs/msg/mesh_triangle.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace shape_msgs {
    typedef msg::MeshTriangle MeshTriangle;
}

#endif // _SHAPE_MSGS_MESHTRIANGLE_H
