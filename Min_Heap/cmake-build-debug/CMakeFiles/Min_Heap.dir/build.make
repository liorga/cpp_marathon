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
CMAKE_SOURCE_DIR = /home/lior/cpp/cpp_marathon_2021/Min_Heap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Min_Heap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Min_Heap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Min_Heap.dir/flags.make

CMakeFiles/Min_Heap.dir/main.cpp.o: CMakeFiles/Min_Heap.dir/flags.make
CMakeFiles/Min_Heap.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Min_Heap.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Min_Heap.dir/main.cpp.o -c /home/lior/cpp/cpp_marathon_2021/Min_Heap/main.cpp

CMakeFiles/Min_Heap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Min_Heap.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lior/cpp/cpp_marathon_2021/Min_Heap/main.cpp > CMakeFiles/Min_Heap.dir/main.cpp.i

CMakeFiles/Min_Heap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Min_Heap.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lior/cpp/cpp_marathon_2021/Min_Heap/main.cpp -o CMakeFiles/Min_Heap.dir/main.cpp.s

# Object files for target Min_Heap
Min_Heap_OBJECTS = \
"CMakeFiles/Min_Heap.dir/main.cpp.o"

# External object files for target Min_Heap
Min_Heap_EXTERNAL_OBJECTS =

Min_Heap: CMakeFiles/Min_Heap.dir/main.cpp.o
Min_Heap: CMakeFiles/Min_Heap.dir/build.make
Min_Heap: CMakeFiles/Min_Heap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Min_Heap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Min_Heap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Min_Heap.dir/build: Min_Heap

.PHONY : CMakeFiles/Min_Heap.dir/build

CMakeFiles/Min_Heap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Min_Heap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Min_Heap.dir/clean

CMakeFiles/Min_Heap.dir/depend:
	cd /home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lior/cpp/cpp_marathon_2021/Min_Heap /home/lior/cpp/cpp_marathon_2021/Min_Heap /home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug /home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug /home/lior/cpp/cpp_marathon_2021/Min_Heap/cmake-build-debug/CMakeFiles/Min_Heap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Min_Heap.dir/depend

