# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kingster\CLionProjects\LTCC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kingster\CLionProjects\LTCC\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/16J2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/16J2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/16J2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/16J2.dir/flags.make

CMakeFiles/16J2.dir/CCC/16J2.cpp.obj: CMakeFiles/16J2.dir/flags.make
CMakeFiles/16J2.dir/CCC/16J2.cpp.obj: ../CCC/16J2.cpp
CMakeFiles/16J2.dir/CCC/16J2.cpp.obj: CMakeFiles/16J2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kingster\CLionProjects\LTCC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/16J2.dir/CCC/16J2.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/16J2.dir/CCC/16J2.cpp.obj -MF CMakeFiles\16J2.dir\CCC\16J2.cpp.obj.d -o CMakeFiles\16J2.dir\CCC\16J2.cpp.obj -c C:\Users\Kingster\CLionProjects\LTCC\CCC\16J2.cpp

CMakeFiles/16J2.dir/CCC/16J2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/16J2.dir/CCC/16J2.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kingster\CLionProjects\LTCC\CCC\16J2.cpp > CMakeFiles\16J2.dir\CCC\16J2.cpp.i

CMakeFiles/16J2.dir/CCC/16J2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/16J2.dir/CCC/16J2.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.3\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Kingster\CLionProjects\LTCC\CCC\16J2.cpp -o CMakeFiles\16J2.dir\CCC\16J2.cpp.s

# Object files for target 16J2
16J2_OBJECTS = \
"CMakeFiles/16J2.dir/CCC/16J2.cpp.obj"

# External object files for target 16J2
16J2_EXTERNAL_OBJECTS =

16J2.exe: CMakeFiles/16J2.dir/CCC/16J2.cpp.obj
16J2.exe: CMakeFiles/16J2.dir/build.make
16J2.exe: CMakeFiles/16J2.dir/linklibs.rsp
16J2.exe: CMakeFiles/16J2.dir/objects1.rsp
16J2.exe: CMakeFiles/16J2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kingster\CLionProjects\LTCC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 16J2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\16J2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/16J2.dir/build: 16J2.exe
.PHONY : CMakeFiles/16J2.dir/build

CMakeFiles/16J2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\16J2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/16J2.dir/clean

CMakeFiles/16J2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Kingster\CLionProjects\LTCC C:\Users\Kingster\CLionProjects\LTCC C:\Users\Kingster\CLionProjects\LTCC\cmake-build-debug C:\Users\Kingster\CLionProjects\LTCC\cmake-build-debug C:\Users\Kingster\CLionProjects\LTCC\cmake-build-debug\CMakeFiles\16J2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/16J2.dir/depend

