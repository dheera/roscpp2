# roscpp2

Similar to [rospy2](https://github.com/dheera/rospy2), **roscpp2** is designed to make it easy to port a C++ ROS1 node to ROS2.

Work in progress -- not yet functional. I welcome insights and help from C++ experts if anyone is watching this repo.

## Intended workflow

1. Clone this repo into your_package/roscpp2/
2. Add "roscpp2" to your include directories
3. Edit your CMakeLists.txt and package.xml to be ROS2-compatible.
4. If you use custom message types, you need a couple additional steps: (A) Transition the messages to ROS2 (B) Create header shims inside this repo, follow the examples as in sensor_msgs or std_msgs.
5. Put your whole package into a colcon_ws and build.
