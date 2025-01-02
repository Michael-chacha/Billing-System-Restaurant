# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(restaurant_billing_system)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files for the project
set(SOURCES
        main.cpp
        admin.cpp
        user.cpp
        menu.cpp
)

# Header files for the project
set(HEADERS
        admin.h
        user.h
        menu.h
)

# Add the executable
add_executable(restaurant_billing_system ${SOURCES} ${HEADERS})

# Automatically set the build output directory to the `build` folder
set_target_properties(restaurant_billing_system PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build
)

# Include directories for header files
target_include_directories(restaurant_billing_system PUBLIC ${CMAKE_SOURCE_DIR})
