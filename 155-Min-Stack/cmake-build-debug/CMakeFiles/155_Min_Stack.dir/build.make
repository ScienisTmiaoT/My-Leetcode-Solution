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
CMAKE_SOURCE_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/155_Min_Stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/155_Min_Stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/155_Min_Stack.dir/flags.make

CMakeFiles/155_Min_Stack.dir/main.cpp.obj: CMakeFiles/155_Min_Stack.dir/flags.make
CMakeFiles/155_Min_Stack.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/155_Min_Stack.dir/main.cpp.obj"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\155_Min_Stack.dir\main.cpp.obj -c "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\main.cpp"

CMakeFiles/155_Min_Stack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/155_Min_Stack.dir/main.cpp.i"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\main.cpp" > CMakeFiles\155_Min_Stack.dir\main.cpp.i

CMakeFiles/155_Min_Stack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/155_Min_Stack.dir/main.cpp.s"
	C:\WorkStation\CodeTool\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\main.cpp" -o CMakeFiles\155_Min_Stack.dir\main.cpp.s

CMakeFiles/155_Min_Stack.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/155_Min_Stack.dir/main.cpp.obj.requires

CMakeFiles/155_Min_Stack.dir/main.cpp.obj.provides: CMakeFiles/155_Min_Stack.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\155_Min_Stack.dir\build.make CMakeFiles/155_Min_Stack.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/155_Min_Stack.dir/main.cpp.obj.provides

CMakeFiles/155_Min_Stack.dir/main.cpp.obj.provides.build: CMakeFiles/155_Min_Stack.dir/main.cpp.obj


# Object files for target 155_Min_Stack
155_Min_Stack_OBJECTS = \
"CMakeFiles/155_Min_Stack.dir/main.cpp.obj"

# External object files for target 155_Min_Stack
155_Min_Stack_EXTERNAL_OBJECTS =

155_Min_Stack.exe: CMakeFiles/155_Min_Stack.dir/main.cpp.obj
155_Min_Stack.exe: CMakeFiles/155_Min_Stack.dir/build.make
155_Min_Stack.exe: CMakeFiles/155_Min_Stack.dir/linklibs.rsp
155_Min_Stack.exe: CMakeFiles/155_Min_Stack.dir/objects1.rsp
155_Min_Stack.exe: CMakeFiles/155_Min_Stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 155_Min_Stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\155_Min_Stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/155_Min_Stack.dir/build: 155_Min_Stack.exe

.PHONY : CMakeFiles/155_Min_Stack.dir/build

CMakeFiles/155_Min_Stack.dir/requires: CMakeFiles/155_Min_Stack.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/155_Min_Stack.dir/requires

CMakeFiles/155_Min_Stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\155_Min_Stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/155_Min_Stack.dir/clean

CMakeFiles/155_Min_Stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\cmake-build-debug" "D:\Marvin\Collection\Git\Github\C++\My Leetcode Solution\155-Min-Stack\cmake-build-debug\CMakeFiles\155_Min_Stack.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/155_Min_Stack.dir/depend

