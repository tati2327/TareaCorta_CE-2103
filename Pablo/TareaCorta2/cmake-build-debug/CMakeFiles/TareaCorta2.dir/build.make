# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pablo/Documentos/TareaCorta2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pablo/Documentos/TareaCorta2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TareaCorta2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TareaCorta2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TareaCorta2.dir/flags.make

CMakeFiles/TareaCorta2.dir/main.cpp.o: CMakeFiles/TareaCorta2.dir/flags.make
CMakeFiles/TareaCorta2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/TareaCorta2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TareaCorta2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TareaCorta2.dir/main.cpp.o -c /home/pablo/Documentos/TareaCorta2/main.cpp

CMakeFiles/TareaCorta2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TareaCorta2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/TareaCorta2/main.cpp > CMakeFiles/TareaCorta2.dir/main.cpp.i

CMakeFiles/TareaCorta2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TareaCorta2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/TareaCorta2/main.cpp -o CMakeFiles/TareaCorta2.dir/main.cpp.s

CMakeFiles/TareaCorta2.dir/Factory.cpp.o: CMakeFiles/TareaCorta2.dir/flags.make
CMakeFiles/TareaCorta2.dir/Factory.cpp.o: ../Factory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/TareaCorta2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TareaCorta2.dir/Factory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TareaCorta2.dir/Factory.cpp.o -c /home/pablo/Documentos/TareaCorta2/Factory.cpp

CMakeFiles/TareaCorta2.dir/Factory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TareaCorta2.dir/Factory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/TareaCorta2/Factory.cpp > CMakeFiles/TareaCorta2.dir/Factory.cpp.i

CMakeFiles/TareaCorta2.dir/Factory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TareaCorta2.dir/Factory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/TareaCorta2/Factory.cpp -o CMakeFiles/TareaCorta2.dir/Factory.cpp.s

CMakeFiles/TareaCorta2.dir/Vehicle.cpp.o: CMakeFiles/TareaCorta2.dir/flags.make
CMakeFiles/TareaCorta2.dir/Vehicle.cpp.o: ../Vehicle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pablo/Documentos/TareaCorta2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TareaCorta2.dir/Vehicle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TareaCorta2.dir/Vehicle.cpp.o -c /home/pablo/Documentos/TareaCorta2/Vehicle.cpp

CMakeFiles/TareaCorta2.dir/Vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TareaCorta2.dir/Vehicle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pablo/Documentos/TareaCorta2/Vehicle.cpp > CMakeFiles/TareaCorta2.dir/Vehicle.cpp.i

CMakeFiles/TareaCorta2.dir/Vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TareaCorta2.dir/Vehicle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pablo/Documentos/TareaCorta2/Vehicle.cpp -o CMakeFiles/TareaCorta2.dir/Vehicle.cpp.s

# Object files for target TareaCorta2
TareaCorta2_OBJECTS = \
"CMakeFiles/TareaCorta2.dir/main.cpp.o" \
"CMakeFiles/TareaCorta2.dir/Factory.cpp.o" \
"CMakeFiles/TareaCorta2.dir/Vehicle.cpp.o"

# External object files for target TareaCorta2
TareaCorta2_EXTERNAL_OBJECTS =

TareaCorta2: CMakeFiles/TareaCorta2.dir/main.cpp.o
TareaCorta2: CMakeFiles/TareaCorta2.dir/Factory.cpp.o
TareaCorta2: CMakeFiles/TareaCorta2.dir/Vehicle.cpp.o
TareaCorta2: CMakeFiles/TareaCorta2.dir/build.make
TareaCorta2: CMakeFiles/TareaCorta2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pablo/Documentos/TareaCorta2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable TareaCorta2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TareaCorta2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TareaCorta2.dir/build: TareaCorta2

.PHONY : CMakeFiles/TareaCorta2.dir/build

CMakeFiles/TareaCorta2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TareaCorta2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TareaCorta2.dir/clean

CMakeFiles/TareaCorta2.dir/depend:
	cd /home/pablo/Documentos/TareaCorta2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pablo/Documentos/TareaCorta2 /home/pablo/Documentos/TareaCorta2 /home/pablo/Documentos/TareaCorta2/cmake-build-debug /home/pablo/Documentos/TareaCorta2/cmake-build-debug /home/pablo/Documentos/TareaCorta2/cmake-build-debug/CMakeFiles/TareaCorta2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TareaCorta2.dir/depend
