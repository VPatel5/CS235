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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/patel/Desktop/HunterCollege

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/patel/Desktop/HunterCollege/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Motorcycle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Motorcycle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Motorcycle.dir/flags.make

CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.o: CMakeFiles/Motorcycle.dir/flags.make
CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.o: ../motorcycle/Motorcycle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/patel/Desktop/HunterCollege/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.o -c /Users/patel/Desktop/HunterCollege/motorcycle/Motorcycle.cpp

CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/patel/Desktop/HunterCollege/motorcycle/Motorcycle.cpp > CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.i

CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/patel/Desktop/HunterCollege/motorcycle/Motorcycle.cpp -o CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.s

# Object files for target Motorcycle
Motorcycle_OBJECTS = \
"CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.o"

# External object files for target Motorcycle
Motorcycle_EXTERNAL_OBJECTS =

Motorcycle: CMakeFiles/Motorcycle.dir/motorcycle/Motorcycle.cpp.o
Motorcycle: CMakeFiles/Motorcycle.dir/build.make
Motorcycle: CMakeFiles/Motorcycle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/patel/Desktop/HunterCollege/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Motorcycle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Motorcycle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Motorcycle.dir/build: Motorcycle

.PHONY : CMakeFiles/Motorcycle.dir/build

CMakeFiles/Motorcycle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Motorcycle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Motorcycle.dir/clean

CMakeFiles/Motorcycle.dir/depend:
	cd /Users/patel/Desktop/HunterCollege/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/patel/Desktop/HunterCollege /Users/patel/Desktop/HunterCollege /Users/patel/Desktop/HunterCollege/cmake-build-debug /Users/patel/Desktop/HunterCollege/cmake-build-debug /Users/patel/Desktop/HunterCollege/cmake-build-debug/CMakeFiles/Motorcycle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Motorcycle.dir/depend

