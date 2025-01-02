# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(RestaurantBillingSystem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add all source files
set(SOURCES
        main.cpp
        admin.cpp
        user.cpp
        menu.cpp
)

# Add all header files
set(HEADERS
        admin.h
        user.h
        menu.h
)

# Add the executable
add_executable(RestaurantBillingSystem ${SOURCES} ${HEADERS})

# Include directories for header files
target_include_directories(RestaurantBillingSystem PUBLIC ${CMAKE_SOURCE_DIR})
