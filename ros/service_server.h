#ifndef _service_server_dot_h
#define _service_server_dot_h

#include <string>
#include <memory>
#include <cmath>

#include "rclcpp/rclcpp.hpp"

namespace ros {

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

}

#endif // _service_server_dot_h