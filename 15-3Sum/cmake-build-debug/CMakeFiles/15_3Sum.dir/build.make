# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\WorkStation\CodeTool\JetBrains\CLion 2016.3.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\WorkStation\CodeTool\JetBrains\CLion 2016.3.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/15_3Sum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/15_3Sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/15_3Sum.dir/flags.make

CMakeFiles/15_3Sum.dir/main.cpp.obj: CMakeFiles/15_3Sum.dir/flags.make
CMakeFiles/15_3Sum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/15_3Sum.dir/main.cpp.obj"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\15_3Sum.dir\main.cpp.obj -c "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\main.cpp"

CMakeFiles/15_3Sum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/15_3Sum.dir/main.cpp.i"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\main.cpp" > CMakeFiles\15_3Sum.dir\main.cpp.i

CMakeFiles/15_3Sum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/15_3Sum.dir/main.cpp.s"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\main.cpp" -o CMakeFiles\15_3Sum.dir\main.cpp.s

CMakeFiles/15_3Sum.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/15_3Sum.dir/main.cpp.obj.requires

CMakeFiles/15_3Sum.dir/main.cpp.obj.provides: CMakeFiles/15_3Sum.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\15_3Sum.dir\build.make CMakeFiles/15_3Sum.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/15_3Sum.dir/main.cpp.obj.provides

CMakeFiles/15_3Sum.dir/main.cpp.obj.provides.build: CMakeFiles/15_3Sum.dir/main.cpp.obj


# Object files for target 15_3Sum
15_3Sum_OBJECTS = \
"CMakeFiles/15_3Sum.dir/main.cpp.obj"

# External object files for target 15_3Sum
15_3Sum_EXTERNAL_OBJECTS =

15_3Sum.exe: CMakeFiles/15_3Sum.dir/main.cpp.obj
15_3Sum.exe: CMakeFiles/15_3Sum.dir/build.make
15_3Sum.exe: CMakeFiles/15_3Sum.dir/linklibs.rsp
15_3Sum.exe: CMakeFiles/15_3Sum.dir/objects1.rsp
15_3Sum.exe: CMakeFiles/15_3Sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 15_3Sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\15_3Sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/15_3Sum.dir/build: 15_3Sum.exe

.PHONY : CMakeFiles/15_3Sum.dir/build

CMakeFiles/15_3Sum.dir/requires: CMakeFiles/15_3Sum.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/15_3Sum.dir/requires

CMakeFiles/15_3Sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\15_3Sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/15_3Sum.dir/clean

CMakeFiles/15_3Sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\15-3Sum\cmake-build-debug\CMakeFiles\15_3Sum.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/15_3Sum.dir/depend
