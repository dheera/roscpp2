#ifndef _SENSOR_MSGS_REGIONOFINTEREST_H
#define _SENSOR_MSGS_REGIONOFINTEREST_H

#include "sensor_msgs/msg/region_of_interest.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace sensor_msgs {
    typedef msg::RegionOfInterest RegionOfInterest;
}

#endif // _SENSOR_MSGS_REGIONOFINTEREST_H
