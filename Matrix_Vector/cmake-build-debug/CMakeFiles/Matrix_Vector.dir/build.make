# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = C:\Users\Ishti\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\191.6707.69\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Ishti\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\191.6707.69\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Matrix_Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Matrix_Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Matrix_Vector.dir/flags.make

CMakeFiles/Matrix_Vector.dir/main.cpp.obj: CMakeFiles/Matrix_Vector.dir/flags.make
CMakeFiles/Matrix_Vector.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Matrix_Vector.dir/main.cpp.obj"
	C:\PROGRA~2\CodeBlocks\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Matrix_Vector.dir\main.cpp.obj -c D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\main.cpp

CMakeFiles/Matrix_Vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Matrix_Vector.dir/main.cpp.i"
	C:\PROGRA~2\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\main.cpp > CMakeFiles\Matrix_Vector.dir\main.cpp.i

CMakeFiles/Matrix_Vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Matrix_Vector.dir/main.cpp.s"
	C:\PROGRA~2\CodeBlocks\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\main.cpp -o CMakeFiles\Matrix_Vector.dir\main.cpp.s

# Object files for target Matrix_Vector
Matrix_Vector_OBJECTS = \
"CMakeFiles/Matrix_Vector.dir/main.cpp.obj"

# External object files for target Matrix_Vector
Matrix_Vector_EXTERNAL_OBJECTS =

Matrix_Vector.exe: CMakeFiles/Matrix_Vector.dir/main.cpp.obj
Matrix_Vector.exe: CMakeFiles/Matrix_Vector.dir/build.make
Matrix_Vector.exe: CMakeFiles/Matrix_Vector.dir/linklibs.rsp
Matrix_Vector.exe: CMakeFiles/Matrix_Vector.dir/objects1.rsp
Matrix_Vector.exe: CMakeFiles/Matrix_Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Matrix_Vector.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Matrix_Vector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Matrix_Vector.dir/build: Matrix_Vector.exe

.PHONY : CMakeFiles/Matrix_Vector.dir/build

CMakeFiles/Matrix_Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Matrix_Vector.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Matrix_Vector.dir/clean

CMakeFiles/Matrix_Vector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\cmake-build-debug D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\cmake-build-debug D:\Drive\Projects\CLion\Matrix_Vector_cpp\Matrix_Vector\cmake-build-debug\CMakeFiles\Matrix_Vector.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Matrix_Vector.dir/depend

