#ifndef _macros_h
#define _macros_h

#define ROS_FATAL(...) RCLCPP_FATAL(_node->get_logger(), __VA_ARGS__)
#define ROS_FATAL_STREAM(...) RCLCPP_FATAL_STREAM(_node->get_logger(), __VA_ARGS__)
#define ROS_ERROR(...) RCLCPP_ERROR(_node->get_logger(), __VA_ARGS__)
#define ROS_ERROR_STREAM(...) RCLCPP_ERROR_STREAM(_node->get_logger(), __VA_ARGS__)
#define ROS_WARN(...) RCLCPP_WARN(_node->get_logger(), __VA_ARGS__)
#define ROS_WARN_STREAM(...) RCLCPP_WARN_STREAM(_node->get_logger(), __VA_ARGS__)
#define ROS_INFO(...) RCLCPP_INFO(_node->get_logger(), __VA_ARGS__)
#define ROS_INFO_STREAM(...) RCLCPP_INFO_STREAM(_node->get_logger(), __VA_ARGS__)
#define ROS_DEBUG(...) RCLCPP_DEBUG(_node->get_logger(), __VA_ARGS__)
#define ROS_DEBUG_STREAM(...) RCLCPP_DEBUG_STREAM(_node->get_logger(), __VA_ARGS__)

#endif // _macros_h