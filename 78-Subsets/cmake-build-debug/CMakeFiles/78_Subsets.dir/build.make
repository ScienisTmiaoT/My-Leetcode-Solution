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
CMAKE_SOURCE_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/78_Subsets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/78_Subsets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/78_Subsets.dir/flags.make

CMakeFiles/78_Subsets.dir/main.cpp.obj: CMakeFiles/78_Subsets.dir/flags.make
CMakeFiles/78_Subsets.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/78_Subsets.dir/main.cpp.obj"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\78_Subsets.dir\main.cpp.obj -c "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\main.cpp"

CMakeFiles/78_Subsets.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/78_Subsets.dir/main.cpp.i"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\main.cpp" > CMakeFiles\78_Subsets.dir\main.cpp.i

CMakeFiles/78_Subsets.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/78_Subsets.dir/main.cpp.s"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\main.cpp" -o CMakeFiles\78_Subsets.dir\main.cpp.s

CMakeFiles/78_Subsets.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/78_Subsets.dir/main.cpp.obj.requires

CMakeFiles/78_Subsets.dir/main.cpp.obj.provides: CMakeFiles/78_Subsets.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\78_Subsets.dir\build.make CMakeFiles/78_Subsets.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/78_Subsets.dir/main.cpp.obj.provides

CMakeFiles/78_Subsets.dir/main.cpp.obj.provides.build: CMakeFiles/78_Subsets.dir/main.cpp.obj


# Object files for target 78_Subsets
78_Subsets_OBJECTS = \
"CMakeFiles/78_Subsets.dir/main.cpp.obj"

# External object files for target 78_Subsets
78_Subsets_EXTERNAL_OBJECTS =

78_Subsets.exe: CMakeFiles/78_Subsets.dir/main.cpp.obj
78_Subsets.exe: CMakeFiles/78_Subsets.dir/build.make
78_Subsets.exe: CMakeFiles/78_Subsets.dir/linklibs.rsp
78_Subsets.exe: CMakeFiles/78_Subsets.dir/objects1.rsp
78_Subsets.exe: CMakeFiles/78_Subsets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 78_Subsets.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\78_Subsets.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/78_Subsets.dir/build: 78_Subsets.exe

.PHONY : CMakeFiles/78_Subsets.dir/build

CMakeFiles/78_Subsets.dir/requires: CMakeFiles/78_Subsets.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/78_Subsets.dir/requires

CMakeFiles/78_Subsets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\78_Subsets.dir\cmake_clean.cmake
.PHONY : CMakeFiles/78_Subsets.dir/clean

CMakeFiles/78_Subsets.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\78-Subsets\cmake-build-debug\CMakeFiles\78_Subsets.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/78_Subsets.dir/depend

