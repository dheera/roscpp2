#ifndef _ros_dot_h
#define _ros_dot_h

#include <iostream>
#include <string>
#include <memory>
#include <csignal>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "builtin_interfaces/msg/time.hpp"

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

void shutdown() {
    rclcpp::shutdown();
}

class Publisher {
    public:
        Publisher() { }

        template <typename T> static std::unique_ptr<Publisher> create_publisher(std::string topic, uint32_t queue_size, bool latch = false) {
            std::unique_ptr<Publisher> publisher = std::make_unique<Publisher>();
            publisher->_setup<T>(topic, queue_size);
            return publisher;
        }

        template <typename T> void publish(const T& message) const {
            std::static_pointer_cast<rclcpp::Publisher<T>>(_pub)->publish(message);
        }
        
        void shutdown() {
            // TODO: fill in
        }

        operator bool() const {
            return true; // TODO fix
        }

    private:
        template <typename T> void _setup(std::string topic, uint32_t queue_size) {
            _pub = _node->create_publisher<T>(topic, queue_size);
        }
        std::shared_ptr<void> _pub;
};

class ServiceServer {
    public:
        ServiceServer() { }

        template <typename T, class MReq, class MRes> static std::unique_ptr<ServiceServer> create_service(const std::string &service, bool(T::*srv_func)(MReq &, MRes &)) {
            std::unique_ptr<ServiceServer> service_server = std::make_unique<ServiceServer>();
            service_server->_setup<T, MReq, MRes>(service, srv_func);
            return service_server;
        }
        
        void shutdown() {
            // TODO: fill in
        }

        operator bool() const {
            return true; // TODO fix
        }

    private:
        template <typename T, class MReq, class MRes> void _setup(const std::string &service, bool(T::*srv_func)(MReq &, MRes &)) {
            _srv = _node->create_service<T>(service, srv_func);
        }
        std::shared_ptr<void> _srv;
};

class Subscriber {

};

class Rate {

};

class TimeBase {
    public:
        TimeBase() {}
        TimeBase(double t) {
            _sec = std::floor(t);
            _nsec = (t * 1e9) - std::floor(t * 1e9);
        }
        TimeBase(uint32_t sec, uint32_t nsec) {
            _sec = sec;
            _nsec = nsec;
        }
        static TimeBase & now() {
            std::unique_ptr<TimeBase> time = std::make_unique<TimeBase>(
                _clock->now().seconds(),
                _clock->now().nanoseconds()
            );
            return *time;
        }

        operator builtin_interfaces::msg::Time () {
            builtin_interfaces::msg::Time m;
            m.sec = _sec;
            m.nanosec = _nsec;
            return m;
        }

    private:
        uint32_t _sec;
        uint32_t _nsec;
};

typedef TimeBase Time;
typedef TimeBase Duration;

class NodeHandle {
    public:
        NodeHandle() { }
        NodeHandle(std::string space) { _space = space; }

        void param(const std::string param_name, std::string &output, const std::string &default_value) {
            _node->declare_parameter<std::string>(param_name, default_value);
            output = _node->get_parameter(param_name).as_string();
        }

        void param(const std::string param_name, int &output, const int &default_value) {
            _node->declare_parameter<int>(param_name, default_value);
            output = _node->get_parameter(param_name).as_int();
        }

        void param(const std::string param_name, double &output, const double &default_value) {
            _node->declare_parameter<double>(param_name, default_value);
            output = _node->get_parameter(param_name).as_double();
        }

        void param(const std::string param_name, bool &output, const bool &default_value) {
            _node->declare_parameter<bool>(param_name, default_value);
            output = _node->get_parameter(param_name).as_bool();
        }

        template<typename T> Publisher advertise(const std::string &topic, uint32_t queue_size, bool latch=false) {
            return *Publisher::create_publisher<T>(topic, queue_size, latch);
        }

        template<typename T, class MReq, class MRes> ServiceServer advertiseService(const std::string &service, bool(T::*srv_func)(MReq &, MRes &)) {
            return *ServiceServer::create_service<T, MReq, MRes>(service, srv_func);
        }

    private:
        std::string _space;
};

}

#endif // _ros_dot_h