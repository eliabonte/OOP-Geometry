# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/870/bin/cmake

# The command to remove a file.
RM = /snap/cmake/870/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elia/Desktop/tpa/OOP-Geometry

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elia/Desktop/tpa/OOP-Geometry/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/catch2Test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/catch2Test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/catch2Test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/catch2Test.dir/flags.make

tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.o: tests/CMakeFiles/catch2Test.dir/flags.make
tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.o: ../tests/catch2Main.cpp
tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.o: tests/CMakeFiles/catch2Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elia/Desktop/tpa/OOP-Geometry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.o"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.o -MF CMakeFiles/catch2Test.dir/catch2Main.cpp.o.d -o CMakeFiles/catch2Test.dir/catch2Main.cpp.o -c /home/elia/Desktop/tpa/OOP-Geometry/tests/catch2Main.cpp

tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/catch2Test.dir/catch2Main.cpp.i"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elia/Desktop/tpa/OOP-Geometry/tests/catch2Main.cpp > CMakeFiles/catch2Test.dir/catch2Main.cpp.i

tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/catch2Test.dir/catch2Main.cpp.s"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elia/Desktop/tpa/OOP-Geometry/tests/catch2Main.cpp -o CMakeFiles/catch2Test.dir/catch2Main.cpp.s

tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.o: tests/CMakeFiles/catch2Test.dir/flags.make
tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.o: ../tests/testGeometry.cpp
tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.o: tests/CMakeFiles/catch2Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elia/Desktop/tpa/OOP-Geometry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.o"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.o -MF CMakeFiles/catch2Test.dir/testGeometry.cpp.o.d -o CMakeFiles/catch2Test.dir/testGeometry.cpp.o -c /home/elia/Desktop/tpa/OOP-Geometry/tests/testGeometry.cpp

tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/catch2Test.dir/testGeometry.cpp.i"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elia/Desktop/tpa/OOP-Geometry/tests/testGeometry.cpp > CMakeFiles/catch2Test.dir/testGeometry.cpp.i

tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/catch2Test.dir/testGeometry.cpp.s"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elia/Desktop/tpa/OOP-Geometry/tests/testGeometry.cpp -o CMakeFiles/catch2Test.dir/testGeometry.cpp.s

tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o: tests/CMakeFiles/catch2Test.dir/flags.make
tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o: ../src/geometry.cpp
tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o: tests/CMakeFiles/catch2Test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elia/Desktop/tpa/OOP-Geometry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o -MF CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o.d -o CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o -c /home/elia/Desktop/tpa/OOP-Geometry/src/geometry.cpp

tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/catch2Test.dir/__/src/geometry.cpp.i"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elia/Desktop/tpa/OOP-Geometry/src/geometry.cpp > CMakeFiles/catch2Test.dir/__/src/geometry.cpp.i

tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/catch2Test.dir/__/src/geometry.cpp.s"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elia/Desktop/tpa/OOP-Geometry/src/geometry.cpp -o CMakeFiles/catch2Test.dir/__/src/geometry.cpp.s

# Object files for target catch2Test
catch2Test_OBJECTS = \
"CMakeFiles/catch2Test.dir/catch2Main.cpp.o" \
"CMakeFiles/catch2Test.dir/testGeometry.cpp.o" \
"CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o"

# External object files for target catch2Test
catch2Test_EXTERNAL_OBJECTS =

tests/catch2Test: tests/CMakeFiles/catch2Test.dir/catch2Main.cpp.o
tests/catch2Test: tests/CMakeFiles/catch2Test.dir/testGeometry.cpp.o
tests/catch2Test: tests/CMakeFiles/catch2Test.dir/__/src/geometry.cpp.o
tests/catch2Test: tests/CMakeFiles/catch2Test.dir/build.make
tests/catch2Test: tests/CMakeFiles/catch2Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elia/Desktop/tpa/OOP-Geometry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable catch2Test"
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/catch2Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/catch2Test.dir/build: tests/catch2Test
.PHONY : tests/CMakeFiles/catch2Test.dir/build

tests/CMakeFiles/catch2Test.dir/clean:
	cd /home/elia/Desktop/tpa/OOP-Geometry/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/catch2Test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/catch2Test.dir/clean

tests/CMakeFiles/catch2Test.dir/depend:
	cd /home/elia/Desktop/tpa/OOP-Geometry/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elia/Desktop/tpa/OOP-Geometry /home/elia/Desktop/tpa/OOP-Geometry/tests /home/elia/Desktop/tpa/OOP-Geometry/build /home/elia/Desktop/tpa/OOP-Geometry/build/tests /home/elia/Desktop/tpa/OOP-Geometry/build/tests/CMakeFiles/catch2Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/catch2Test.dir/depend
