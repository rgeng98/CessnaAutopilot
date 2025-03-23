add_library(MOTOR_CONTROLLER_LIB 
    MotorSpeedController.cpp
)

include_directories(MOTOR_CONTROLLER_LIB ${CMAKE_SOURCE_DIR}/include)

link_directories(${GAZEBO_LIBRARY_DIRS})
target_link_libraries(MOTOR_CONTROLLER_LIB CONTROLLER_LIB ${GAZEBO_LIBRARIES} gazebo_transport gazebo_msgs TBB::tbb)