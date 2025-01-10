cmake_minimum_required(VERSION 3.14.7)

# set CMAKE_MODULE_PATH before including the CMake modules
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../AppFx/Scripts/CMake)
include(Qt)

add_subdirectory(ExternalWidgets)
