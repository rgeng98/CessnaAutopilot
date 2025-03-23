find_package(Eigen3 REQUIRED)

add_library(DATABASE_LIB 
   database.cpp
)

include_directories(DATABASE_LIB ${CMAKE_SOURCE_DIR}/include)
link_directories(${GAZEBO_LIBRARY_DIRS})
target_link_libraries(DATABASE_LIB CONTROLLER_LIB ${GAZEBO_LIBRARIES} gazebo_transport gazebo_msgs TBB::tbb)