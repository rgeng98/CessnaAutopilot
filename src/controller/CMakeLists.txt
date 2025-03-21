find_package(Eigen3 REQUIRED)

add_library(CONTROLLER_LIB 
    base.cpp
    LQR.cpp
    PID.cpp
    PolePlacement.cpp
)

include_directories(CONTROLLER_LIB ${CMAKE_SOURCE_DIR}/include)
link_directories(${GAZEBO_LIBRARY_DIRS})
target_link_libraries(CONTROLLER_LIB Eigen3::Eigen ${GAZEBO_LIBRARIES} ${ignition-math6_LIBRARIES} gazebo_transport gazebo_msgs TBB::tbb)