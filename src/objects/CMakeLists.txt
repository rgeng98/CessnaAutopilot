add_library(OBJECTS 
    imu.cpp
)

include_directories(OBJECTS ${CMAKE_SOURCE_DIR}/include)

link_directories(${GAZEBO_LIBRARY_DIRS})
target_link_libraries(OBJECTS ${GAZEBO_LIBRARIES} gazebo_transport gazebo_msgs TBB::tbb)