#ifndef _STEREO_MSGS_DISPARITYIMAGE_H
#define _STEREO_MSGS_DISPARITYIMAGE_H

#include "stereo_msgs/msg/disparity_image.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace stereo_msgs {
    typedef msg::DisparityImage DisparityImage;
}

#endif // _STEREO_MSGS_DISPARITYIMAGE_H
