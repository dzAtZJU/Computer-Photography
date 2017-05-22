cmake_minimum_required(VERSION 3.7)
project(CylindricalPanoramic)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp CylinDricalMap.cpp CylinDricalMap.h CylinDricalMappedImage.cpp CylinDricalMappedImage.h MyUtility.cpp MyUtility.h)
add_executable(CylindricalPanoramic ${SOURCE_FILES})

target_link_libraries(CylindricalPanoramic ${OpenCV_LIBS} )