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
CMAKE_SOURCE_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/40_Combination_Sum_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/40_Combination_Sum_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/40_Combination_Sum_II.dir/flags.make

CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj: CMakeFiles/40_Combination_Sum_II.dir/flags.make
CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\40_Combination_Sum_II.dir\main.cpp.obj -c "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\main.cpp"

CMakeFiles/40_Combination_Sum_II.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/40_Combination_Sum_II.dir/main.cpp.i"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\main.cpp" > CMakeFiles\40_Combination_Sum_II.dir\main.cpp.i

CMakeFiles/40_Combination_Sum_II.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/40_Combination_Sum_II.dir/main.cpp.s"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\main.cpp" -o CMakeFiles\40_Combination_Sum_II.dir\main.cpp.s

CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.requires

CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.provides: CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\40_Combination_Sum_II.dir\build.make CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.provides

CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.provides.build: CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj


# Object files for target 40_Combination_Sum_II
40_Combination_Sum_II_OBJECTS = \
"CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj"

# External object files for target 40_Combination_Sum_II
40_Combination_Sum_II_EXTERNAL_OBJECTS =

40_Combination_Sum_II.exe: CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj
40_Combination_Sum_II.exe: CMakeFiles/40_Combination_Sum_II.dir/build.make
40_Combination_Sum_II.exe: CMakeFiles/40_Combination_Sum_II.dir/linklibs.rsp
40_Combination_Sum_II.exe: CMakeFiles/40_Combination_Sum_II.dir/objects1.rsp
40_Combination_Sum_II.exe: CMakeFiles/40_Combination_Sum_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 40_Combination_Sum_II.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\40_Combination_Sum_II.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/40_Combination_Sum_II.dir/build: 40_Combination_Sum_II.exe

.PHONY : CMakeFiles/40_Combination_Sum_II.dir/build

CMakeFiles/40_Combination_Sum_II.dir/requires: CMakeFiles/40_Combination_Sum_II.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/40_Combination_Sum_II.dir/requires

CMakeFiles/40_Combination_Sum_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\40_Combination_Sum_II.dir\cmake_clean.cmake
.PHONY : CMakeFiles/40_Combination_Sum_II.dir/clean

CMakeFiles/40_Combination_Sum_II.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\40-Combination-Sum-II\cmake-build-debug\CMakeFiles\40_Combination_Sum_II.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/40_Combination_Sum_II.dir/depend
