#include <iostream>
#include <string>
#include <memory>
#include <csignal>
#include <cmath>

#include "rclcpp/rclcpp.hpp"

std::shared_ptr<rclcpp::Node> _node;
std::shared_ptr<rclcpp::Clock> _clock;

namespace ros {

void init(int argc, char* argv[], std::string node_name) {
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions node_options;
    node_options.allow_undeclared_parameters(true);
    _node = std::make_shared<rclcpp::Node>(node_name, "ns", node_options);
    _clock = _node->get_clock();
}

bool ok() {
    return rclcpp::ok();
}

void spin() {
    rclcpp::spin(_node);
}

void spinOnce() {
    rclcpp::spin_some(_node);
}

void shutdown() {
    rclcpp::shutdown();
}

}
