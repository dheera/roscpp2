#ifndef _SHAPE_MSGS_SOLIDPRIMITIVE_H
#define _SHAPE_MSGS_SOLIDPRIMITIVE_H

#include "shape_msgs/msg/solid_primitive.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace shape_msgs {
    typedef msg::SolidPrimitive SolidPrimitive;
}

#endif // _SHAPE_MSGS_SOLIDPRIMITIVE_H
