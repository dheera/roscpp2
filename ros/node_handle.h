#ifndef _node_handle_dot_h
#define _node_handle_dot_h

#include <iostream>
#include <string>
#include <memory>
#include <csignal>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "builtin_interfaces/msg/time.hpp"

namespace ros {

class NodeHandle {
    public:
        NodeHandle();
        NodeHandle(std::string space);

        void param(const std::string param_name, std::string &output, const std::string &default_value);
        void param(const std::string param_name, int &output, const int &default_value);
        void param(const std::string param_name, double &output, const double &default_value);
        void param(const std::string param_name, bool &output, const bool &default_value);
        template<typename T> Publisher advertise(const std::string &topic, uint32_t queue_size, bool latch=false);
        template<typename T, class MReq, class MRes> ServiceServer advertiseService(const std::string &service, bool(T::*srv_func)(MReq &, MRes &));

    private:
        std::string _space;
};

NodeHandle::NodeHandle() { }
NodeHandle::NodeHandle(std::string space) { _space = space; }

void NodeHandle::param(const std::string param_name, std::string &output, const std::string &default_value) {
    _node->declare_parameter<std::string>(param_name, default_value);
    output = _node->get_parameter(param_name).as_string();
}

void NodeHandle::param(const std::string param_name, int &output, const int &default_value) {
    _node->declare_parameter<int>(param_name, default_value);
    output = _node->get_parameter(param_name).as_int();
}

void NodeHandle::param(const std::string param_name, double &output, const double &default_value) {
    _node->declare_parameter<double>(param_name, default_value);
    output = _node->get_parameter(param_name).as_double();
}

void NodeHandle::param(const std::string param_name, bool &output, const bool &default_value) {
    _node->declare_parameter<bool>(param_name, default_value);
    output = _node->get_parameter(param_name).as_bool();
}

template<typename T>
Publisher NodeHandle::advertise(const std::string &topic, uint32_t queue_size, bool latch) {
    return *Publisher::create_publisher<T>(topic, queue_size, latch);
}

template<typename T, class MReq, class MRes>
ServiceServer NodeHandle::advertiseService(const std::string &service, bool(T::*srv_func)(MReq &, MRes &)) {
    return *ServiceServer::create_service<T, MReq, MRes>(service, srv_func);
}

}

#endif // _nodehandle_dot_h
