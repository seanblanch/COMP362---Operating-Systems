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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/process_creation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/process_creation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/process_creation.dir/flags.make

CMakeFiles/process_creation.dir/process_creation.c.o: CMakeFiles/process_creation.dir/flags.make
CMakeFiles/process_creation.dir/process_creation.c.o: ../process_creation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/process_creation.dir/process_creation.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/process_creation.dir/process_creation.c.o   -c /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/process_creation.c

CMakeFiles/process_creation.dir/process_creation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/process_creation.dir/process_creation.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/process_creation.c > CMakeFiles/process_creation.dir/process_creation.c.i

CMakeFiles/process_creation.dir/process_creation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/process_creation.dir/process_creation.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/process_creation.c -o CMakeFiles/process_creation.dir/process_creation.c.s

# Object files for target process_creation
process_creation_OBJECTS = \
"CMakeFiles/process_creation.dir/process_creation.c.o"

# External object files for target process_creation
process_creation_EXTERNAL_OBJECTS =

process_creation: CMakeFiles/process_creation.dir/process_creation.c.o
process_creation: CMakeFiles/process_creation.dir/build.make
process_creation: CMakeFiles/process_creation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable process_creation"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/process_creation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/process_creation.dir/build: process_creation

.PHONY : CMakeFiles/process_creation.dir/build

CMakeFiles/process_creation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/process_creation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/process_creation.dir/clean

CMakeFiles/process_creation.dir/depend:
	cd /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1 /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1 /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug /home/seanblanchard/Desktop/comp362/BlanchardSeanLab03/Task1/cmake-build-debug/CMakeFiles/process_creation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/process_creation.dir/depend

