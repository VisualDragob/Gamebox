# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /home/hexygirl/Gamebox/Gamebox/game/qt_emulator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build

# Utility rule file for gamebox_autogen.

# Include the progress variables for this target.
include CMakeFiles/gamebox_autogen.dir/progress.make

CMakeFiles/gamebox_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target gamebox"
	/usr/bin/cmake -E cmake_autogen /home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build/CMakeFiles/gamebox_autogen.dir/AutogenInfo.cmake ""

gamebox_autogen: CMakeFiles/gamebox_autogen
gamebox_autogen: CMakeFiles/gamebox_autogen.dir/build.make

.PHONY : gamebox_autogen

# Rule to build all files generated by this target.
CMakeFiles/gamebox_autogen.dir/build: gamebox_autogen

.PHONY : CMakeFiles/gamebox_autogen.dir/build

CMakeFiles/gamebox_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gamebox_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gamebox_autogen.dir/clean

CMakeFiles/gamebox_autogen.dir/depend:
	cd /home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hexygirl/Gamebox/Gamebox/game/qt_emulator /home/hexygirl/Gamebox/Gamebox/game/qt_emulator /home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build /home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build /home/hexygirl/Gamebox/Gamebox/game/qt_emulator/build/CMakeFiles/gamebox_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gamebox_autogen.dir/depend
