# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Projects\C++Projects\excersise-for-cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Projects\C++Projects\excersise-for-cplusplus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/excersise_for_cplusplus.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/excersise_for_cplusplus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/excersise_for_cplusplus.dir/flags.make

CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.obj: CMakeFiles/excersise_for_cplusplus.dir/flags.make
CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.obj: ../day\ 07/lottery.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Projects\C++Projects\excersise-for-cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.obj"
	"D:\Program Files\MinGW\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\excersise_for_cplusplus.dir\day_07\lottery.cpp.obj -c "E:\Projects\C++Projects\excersise-for-cplusplus\day 07\lottery.cpp"

CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.i"
	"D:\Program Files\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Projects\C++Projects\excersise-for-cplusplus\day 07\lottery.cpp" > CMakeFiles\excersise_for_cplusplus.dir\day_07\lottery.cpp.i

CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.s"
	"D:\Program Files\MinGW\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Projects\C++Projects\excersise-for-cplusplus\day 07\lottery.cpp" -o CMakeFiles\excersise_for_cplusplus.dir\day_07\lottery.cpp.s

# Object files for target excersise_for_cplusplus
excersise_for_cplusplus_OBJECTS = \
"CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.obj"

# External object files for target excersise_for_cplusplus
excersise_for_cplusplus_EXTERNAL_OBJECTS =

excersise_for_cplusplus.exe: CMakeFiles/excersise_for_cplusplus.dir/day_07/lottery.cpp.obj
excersise_for_cplusplus.exe: CMakeFiles/excersise_for_cplusplus.dir/build.make
excersise_for_cplusplus.exe: CMakeFiles/excersise_for_cplusplus.dir/linklibs.rsp
excersise_for_cplusplus.exe: CMakeFiles/excersise_for_cplusplus.dir/objects1.rsp
excersise_for_cplusplus.exe: CMakeFiles/excersise_for_cplusplus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Projects\C++Projects\excersise-for-cplusplus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable excersise_for_cplusplus.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\excersise_for_cplusplus.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/excersise_for_cplusplus.dir/build: excersise_for_cplusplus.exe

.PHONY : CMakeFiles/excersise_for_cplusplus.dir/build

CMakeFiles/excersise_for_cplusplus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\excersise_for_cplusplus.dir\cmake_clean.cmake
.PHONY : CMakeFiles/excersise_for_cplusplus.dir/clean

CMakeFiles/excersise_for_cplusplus.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Projects\C++Projects\excersise-for-cplusplus E:\Projects\C++Projects\excersise-for-cplusplus E:\Projects\C++Projects\excersise-for-cplusplus\cmake-build-debug E:\Projects\C++Projects\excersise-for-cplusplus\cmake-build-debug E:\Projects\C++Projects\excersise-for-cplusplus\cmake-build-debug\CMakeFiles\excersise_for_cplusplus.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/excersise_for_cplusplus.dir/depend

