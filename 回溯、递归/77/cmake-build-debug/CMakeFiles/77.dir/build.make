# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zkk/CLionProjects/回溯、递归/77

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/77.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/77.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/77.dir/flags.make

CMakeFiles/77.dir/main.cpp.o: CMakeFiles/77.dir/flags.make
CMakeFiles/77.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/77.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/77.dir/main.cpp.o -c /Users/zkk/CLionProjects/回溯、递归/77/main.cpp

CMakeFiles/77.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/77.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zkk/CLionProjects/回溯、递归/77/main.cpp > CMakeFiles/77.dir/main.cpp.i

CMakeFiles/77.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/77.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zkk/CLionProjects/回溯、递归/77/main.cpp -o CMakeFiles/77.dir/main.cpp.s

# Object files for target 77
77_OBJECTS = \
"CMakeFiles/77.dir/main.cpp.o"

# External object files for target 77
77_EXTERNAL_OBJECTS =

77: CMakeFiles/77.dir/main.cpp.o
77: CMakeFiles/77.dir/build.make
77: CMakeFiles/77.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 77"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/77.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/77.dir/build: 77

.PHONY : CMakeFiles/77.dir/build

CMakeFiles/77.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/77.dir/cmake_clean.cmake
.PHONY : CMakeFiles/77.dir/clean

CMakeFiles/77.dir/depend:
	cd /Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zkk/CLionProjects/回溯、递归/77 /Users/zkk/CLionProjects/回溯、递归/77 /Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug /Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug /Users/zkk/CLionProjects/回溯、递归/77/cmake-build-debug/CMakeFiles/77.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/77.dir/depend

