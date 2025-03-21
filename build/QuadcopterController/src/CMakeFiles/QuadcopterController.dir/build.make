# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rgeng/Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rgeng/Project/build/QuadcopterController

# Include any dependencies generated for this target.
include src/CMakeFiles/QuadcopterController.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/QuadcopterController.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/QuadcopterController.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/QuadcopterController.dir/flags.make

src/CMakeFiles/QuadcopterController.dir/main.cpp.o: src/CMakeFiles/QuadcopterController.dir/flags.make
src/CMakeFiles/QuadcopterController.dir/main.cpp.o: ../../src/main.cpp
src/CMakeFiles/QuadcopterController.dir/main.cpp.o: src/CMakeFiles/QuadcopterController.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rgeng/Project/build/QuadcopterController/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/QuadcopterController.dir/main.cpp.o"
	cd /home/rgeng/Project/build/QuadcopterController/src && /usr/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/QuadcopterController.dir/main.cpp.o -MF CMakeFiles/QuadcopterController.dir/main.cpp.o.d -o CMakeFiles/QuadcopterController.dir/main.cpp.o -c /home/rgeng/Project/src/main.cpp

src/CMakeFiles/QuadcopterController.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuadcopterController.dir/main.cpp.i"
	cd /home/rgeng/Project/build/QuadcopterController/src && /usr/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rgeng/Project/src/main.cpp > CMakeFiles/QuadcopterController.dir/main.cpp.i

src/CMakeFiles/QuadcopterController.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuadcopterController.dir/main.cpp.s"
	cd /home/rgeng/Project/build/QuadcopterController/src && /usr/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rgeng/Project/src/main.cpp -o CMakeFiles/QuadcopterController.dir/main.cpp.s

# Object files for target QuadcopterController
QuadcopterController_OBJECTS = \
"CMakeFiles/QuadcopterController.dir/main.cpp.o"

# External object files for target QuadcopterController
QuadcopterController_EXTERNAL_OBJECTS =

src/QuadcopterController: src/CMakeFiles/QuadcopterController.dir/main.cpp.o
src/QuadcopterController: src/CMakeFiles/QuadcopterController.dir/build.make
src/QuadcopterController: src/objects/libOBJECTS.a
src/QuadcopterController: src/controller/libCONTROLLER_LIB.a
src/QuadcopterController: src/database/libDATABASE_LIB.a
src/QuadcopterController: src/MotorDriver/libMOTOR_CONTROLLER_LIB.a
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libprotobuf.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libOgreMain.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
src/QuadcopterController: src/controller/libCONTROLLER_LIB.a
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libSimTKsimbody.so.3.6
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libSimTKmath.so.3.6
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libSimTKcommon.so.3.6
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libblas.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/liblapack.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libblas.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/liblapack.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libdart.so.6.12.1
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libdart-external-odelcpsolver.so.6.12.1
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libccd.so.2.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libm.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libfcl.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libassimp.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/liboctomap.so.1.9.7
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/liboctomath.so.1.9.7
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libprotobuf.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libsdformat9.so.9.7.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libOgreMain.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libignition-transport8.so.8.2.1
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libignition-common3-graphics.so.3.14.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libignition-fuel_tools4.so.4.4.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libignition-msgs5.so.5.8.1
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libignition-math6.so.6.15.1
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libprotobuf.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libignition-common3.so.3.14.0
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libuuid.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libuuid.so
src/QuadcopterController: /usr/lib/x86_64-linux-gnu/libtbb.so.12.5
src/QuadcopterController: src/CMakeFiles/QuadcopterController.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rgeng/Project/build/QuadcopterController/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QuadcopterController"
	cd /home/rgeng/Project/build/QuadcopterController/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuadcopterController.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/QuadcopterController.dir/build: src/QuadcopterController
.PHONY : src/CMakeFiles/QuadcopterController.dir/build

src/CMakeFiles/QuadcopterController.dir/clean:
	cd /home/rgeng/Project/build/QuadcopterController/src && $(CMAKE_COMMAND) -P CMakeFiles/QuadcopterController.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/QuadcopterController.dir/clean

src/CMakeFiles/QuadcopterController.dir/depend:
	cd /home/rgeng/Project/build/QuadcopterController && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rgeng/Project /home/rgeng/Project/src /home/rgeng/Project/build/QuadcopterController /home/rgeng/Project/build/QuadcopterController/src /home/rgeng/Project/build/QuadcopterController/src/CMakeFiles/QuadcopterController.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/QuadcopterController.dir/depend

