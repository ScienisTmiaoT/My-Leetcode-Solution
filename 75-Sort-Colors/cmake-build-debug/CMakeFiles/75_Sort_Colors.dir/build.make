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
CMAKE_SOURCE_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/75_Sort_Colors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/75_Sort_Colors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/75_Sort_Colors.dir/flags.make

CMakeFiles/75_Sort_Colors.dir/main.cpp.obj: CMakeFiles/75_Sort_Colors.dir/flags.make
CMakeFiles/75_Sort_Colors.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/75_Sort_Colors.dir/main.cpp.obj"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\75_Sort_Colors.dir\main.cpp.obj -c "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\main.cpp"

CMakeFiles/75_Sort_Colors.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/75_Sort_Colors.dir/main.cpp.i"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\main.cpp" > CMakeFiles\75_Sort_Colors.dir\main.cpp.i

CMakeFiles/75_Sort_Colors.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/75_Sort_Colors.dir/main.cpp.s"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\main.cpp" -o CMakeFiles\75_Sort_Colors.dir\main.cpp.s

CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.requires

CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.provides: CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\75_Sort_Colors.dir\build.make CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.provides

CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.provides.build: CMakeFiles/75_Sort_Colors.dir/main.cpp.obj


# Object files for target 75_Sort_Colors
75_Sort_Colors_OBJECTS = \
"CMakeFiles/75_Sort_Colors.dir/main.cpp.obj"

# External object files for target 75_Sort_Colors
75_Sort_Colors_EXTERNAL_OBJECTS =

75_Sort_Colors.exe: CMakeFiles/75_Sort_Colors.dir/main.cpp.obj
75_Sort_Colors.exe: CMakeFiles/75_Sort_Colors.dir/build.make
75_Sort_Colors.exe: CMakeFiles/75_Sort_Colors.dir/linklibs.rsp
75_Sort_Colors.exe: CMakeFiles/75_Sort_Colors.dir/objects1.rsp
75_Sort_Colors.exe: CMakeFiles/75_Sort_Colors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 75_Sort_Colors.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\75_Sort_Colors.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/75_Sort_Colors.dir/build: 75_Sort_Colors.exe

.PHONY : CMakeFiles/75_Sort_Colors.dir/build

CMakeFiles/75_Sort_Colors.dir/requires: CMakeFiles/75_Sort_Colors.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/75_Sort_Colors.dir/requires

CMakeFiles/75_Sort_Colors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\75_Sort_Colors.dir\cmake_clean.cmake
.PHONY : CMakeFiles/75_Sort_Colors.dir/clean

CMakeFiles/75_Sort_Colors.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\75-Sort-Colors\cmake-build-debug\CMakeFiles\75_Sort_Colors.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/75_Sort_Colors.dir/depend

