#ifndef _publisher_dot_h
#define _publisher_dot_h

#include <string>
#include <memory>
#include <cmath>

#include "rclcpp/rclcpp.hpp"

namespace ros {

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

}

#endif // _publisher_dot_h