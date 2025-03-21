add_subdirectory(controller)
add_subdirectory(database)
add_subdirectory(MotorDriver)
add_subdirectory(objects)


add_executable(${PROJECT_NAME} main.cpp)

link_directories(${GAZEBO_LIBRARY_DIRS})

target_link_libraries(
    ${PROJECT_NAME} 
    OBJECTS 
    CONTROLLER_LIB
    DATABASE_LIB 
    MOTOR_CONTROLLER_LIB
    ${GAZEBO_LIBRARIES}
    ${ignition-math6_LIBRARIES}
    gazebo_transport
    gazebo_msgs
    )
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    /usr/include
    /usr/include/gazebo-11
    /usr/include/bullet
    /usr/include/simbody
    /usr/include/sdformat-9.7
    /usr/include/ignition/math6
    /usr/include/OGRE
    /usr/include/OGRE/Terrain
    /usr/include/OGRE/Paging
    /usr/include/ignition/math6
    /usr/include/ignition/transport8
    /usr/include/ignition/msgs5
    /usr/include/ignition/common3
    /usr/include/ignition/fuel_tools4
    /usr/include/gazebo-11
    )