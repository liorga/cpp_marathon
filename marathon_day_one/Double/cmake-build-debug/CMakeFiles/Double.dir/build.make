# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /home/lior/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/lior/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Double.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Double.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Double.dir/flags.make

CMakeFiles/Double.dir/main.cpp.o: CMakeFiles/Double.dir/flags.make
CMakeFiles/Double.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Double.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Double.dir/main.cpp.o -c /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/main.cpp

CMakeFiles/Double.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Double.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/main.cpp > CMakeFiles/Double.dir/main.cpp.i

CMakeFiles/Double.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Double.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/main.cpp -o CMakeFiles/Double.dir/main.cpp.s

# Object files for target Double
Double_OBJECTS = \
"CMakeFiles/Double.dir/main.cpp.o"

# External object files for target Double
Double_EXTERNAL_OBJECTS =

Double: CMakeFiles/Double.dir/main.cpp.o
Double: CMakeFiles/Double.dir/build.make
Double: CMakeFiles/Double.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Double"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Double.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Double.dir/build: Double

.PHONY : CMakeFiles/Double.dir/build

CMakeFiles/Double.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Double.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Double.dir/clean

CMakeFiles/Double.dir/depend:
	cd /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Double/cmake-build-debug/CMakeFiles/Double.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Double.dir/depend

