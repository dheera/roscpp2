#!/usr/bin/env python3

# This Python code is used to auto-generate the C++ code for the message and service ROS1->ROS2 shims
# (e.g. everything in std_msgs/, sensor_msgs/, std_srvs/, etc.)
# Its results have been committed to the repository and the user does NOT need to use this script.

import requests, json, re, os, glob

if not os.path.exists("tmp"):
    os.mkdir("tmp")

if not os.path.exists("tmp/common_interfaces"):
    os.system("cd tmp; git clone https://github.com/ros2/common_interfaces")

# messages
for fn in glob.glob("tmp/common_interfaces/*/msg/*.msg"):
    fn = fn.replace("tmp/common_interfaces/", "").replace(".msg", "")
    package_name, dummy, type_name = fn.split("/")
    type_name_camel = re.sub(r'(?<!^)(?=[A-Z])', '_', type_name).lower()
    include_name = ("_%s_%s_h" % (package_name, type_name)).upper()
    file_name = "%s/%s.h" % (package_name, type_name)
    cppcode = """
#ifndef {0}
#define {0}

#include "{1}/msg/{2}.hpp" // ROS2 version of message lives here

// alias ROS2's foo_msgs::msg:Bar to ROS1's foo_msgs::Bar
namespace {1} {{
    typedef msg::{3} {3};
}}

#endif // {0}
""".format(include_name, package_name, type_name_camel, type_name).lstrip()
    print("writing " + file_name)
    if not os.path.exists(package_name):
        os.mkdir(package_name)
    with open(file_name, "w") as f:
        f.write(cppcode)

# services
for fn in glob.glob("tmp/common_interfaces/*/srv/*.srv"):
    fn = fn.replace("tmp/common_interfaces/", "").replace(".srv", "")
    package_name, dummy, type_name = fn.split("/")
    type_name_camel = re.sub(r'(?<!^)(?=[A-Z])', '_', type_name).lower()
    include_name = ("_%s_%s_h" % (package_name, type_name)).upper()
    file_name = "%s/%s.h" % (package_name, type_name)
    cppcode = """
#ifndef {0}
#define {0}

#include "{1}/srv/{2}.hpp" // ROS2 version of service lives here

// alias ROS2's foo_srvs::srv::Bar to ROS1's foo_srvs::Bar
namespace {1} {{
    typedef srv::{3} {3};
}}

#endif // {0}
""".format(include_name, package_name, type_name_camel, type_name).lstrip()
    print("writing " + file_name)
    if not os.path.exists(package_name):
        os.mkdir(package_name)
    with open(file_name, "w") as f:
        f.write(cppcode)
