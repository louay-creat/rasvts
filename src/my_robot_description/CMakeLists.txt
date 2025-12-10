cmake_minimum_required(VERSION 3.5)
project(my_robot_description)

# Just in case, set C standard
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 11)
endif()

find_package(ament_cmake REQUIRED)

# Install URDF directory
install(
  DIRECTORY urdf
  DESTINATION share/${PROJECT_NAME}
)

ament_package()

