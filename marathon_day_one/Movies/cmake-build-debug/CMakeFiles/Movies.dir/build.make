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
CMAKE_SOURCE_DIR = /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Movies.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Movies.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Movies.dir/flags.make

CMakeFiles/Movies.dir/main.cpp.o: CMakeFiles/Movies.dir/flags.make
CMakeFiles/Movies.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Movies.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Movies.dir/main.cpp.o -c /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/main.cpp

CMakeFiles/Movies.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Movies.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/main.cpp > CMakeFiles/Movies.dir/main.cpp.i

CMakeFiles/Movies.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Movies.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/main.cpp -o CMakeFiles/Movies.dir/main.cpp.s

# Object files for target Movies
Movies_OBJECTS = \
"CMakeFiles/Movies.dir/main.cpp.o"

# External object files for target Movies
Movies_EXTERNAL_OBJECTS =

Movies: CMakeFiles/Movies.dir/main.cpp.o
Movies: CMakeFiles/Movies.dir/build.make
Movies: CMakeFiles/Movies.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Movies"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Movies.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Movies.dir/build: Movies

.PHONY : CMakeFiles/Movies.dir/build

CMakeFiles/Movies.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Movies.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Movies.dir/clean

CMakeFiles/Movies.dir/depend:
	cd /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug /home/lior/cpp/cpp_marathon_2021/marathon_day_one/Movies/cmake-build-debug/CMakeFiles/Movies.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Movies.dir/depend

