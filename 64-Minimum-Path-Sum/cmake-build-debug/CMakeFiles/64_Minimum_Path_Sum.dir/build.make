# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\WorkStation\CodeTool\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\WorkStation\CodeTool\JetBrains\CLion 2017.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/64_Minimum_Path_Sum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/64_Minimum_Path_Sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/64_Minimum_Path_Sum.dir/flags.make

CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj: CMakeFiles/64_Minimum_Path_Sum.dir/flags.make
CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\64_Minimum_Path_Sum.dir\main.cpp.obj -c "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\main.cpp"

CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.i"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\main.cpp" > CMakeFiles\64_Minimum_Path_Sum.dir\main.cpp.i

CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.s"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\main.cpp" -o CMakeFiles\64_Minimum_Path_Sum.dir\main.cpp.s

CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.requires

CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.provides: CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\64_Minimum_Path_Sum.dir\build.make CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.provides

CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.provides.build: CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj


# Object files for target 64_Minimum_Path_Sum
64_Minimum_Path_Sum_OBJECTS = \
"CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj"

# External object files for target 64_Minimum_Path_Sum
64_Minimum_Path_Sum_EXTERNAL_OBJECTS =

64_Minimum_Path_Sum.exe: CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj
64_Minimum_Path_Sum.exe: CMakeFiles/64_Minimum_Path_Sum.dir/build.make
64_Minimum_Path_Sum.exe: CMakeFiles/64_Minimum_Path_Sum.dir/linklibs.rsp
64_Minimum_Path_Sum.exe: CMakeFiles/64_Minimum_Path_Sum.dir/objects1.rsp
64_Minimum_Path_Sum.exe: CMakeFiles/64_Minimum_Path_Sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 64_Minimum_Path_Sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\64_Minimum_Path_Sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/64_Minimum_Path_Sum.dir/build: 64_Minimum_Path_Sum.exe

.PHONY : CMakeFiles/64_Minimum_Path_Sum.dir/build

CMakeFiles/64_Minimum_Path_Sum.dir/requires: CMakeFiles/64_Minimum_Path_Sum.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/64_Minimum_Path_Sum.dir/requires

CMakeFiles/64_Minimum_Path_Sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\64_Minimum_Path_Sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/64_Minimum_Path_Sum.dir/clean

CMakeFiles/64_Minimum_Path_Sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\64-Minimum-Path-Sum\cmake-build-debug\CMakeFiles\64_Minimum_Path_Sum.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/64_Minimum_Path_Sum.dir/depend

