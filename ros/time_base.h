#ifndef _time_base_dot_h
#define _time_base_dot_h

#include <string>
#include <memory>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "builtin_interfaces/msg/time.hpp"

namespace ros {

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

}

#endif // _time_base_dot_h