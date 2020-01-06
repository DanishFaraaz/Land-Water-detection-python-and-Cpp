cmake_minimum_required(VERSION 2.8.2)

project(detection)

find_package(OpenCV REQUIRED)

add_executable(detection_cpp detection_cpp.cpp)

target_link_libraries(detection_cpp ${OpenCV_LIBS})
