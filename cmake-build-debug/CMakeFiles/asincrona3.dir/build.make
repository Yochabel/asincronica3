# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\52332\CLionProjects\asincronica3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/asincrona3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/asincrona3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/asincrona3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asincrona3.dir/flags.make

CMakeFiles/asincrona3.dir/main.c.obj: CMakeFiles/asincrona3.dir/flags.make
CMakeFiles/asincrona3.dir/main.c.obj: ../main.c
CMakeFiles/asincrona3.dir/main.c.obj: CMakeFiles/asincrona3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/asincrona3.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/asincrona3.dir/main.c.obj -MF CMakeFiles\asincrona3.dir\main.c.obj.d -o CMakeFiles\asincrona3.dir\main.c.obj -c C:\Users\52332\CLionProjects\asincronica3\main.c

CMakeFiles/asincrona3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/asincrona3.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\52332\CLionProjects\asincronica3\main.c > CMakeFiles\asincrona3.dir\main.c.i

CMakeFiles/asincrona3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/asincrona3.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\52332\CLionProjects\asincronica3\main.c -o CMakeFiles\asincrona3.dir\main.c.s

CMakeFiles/asincrona3.dir/pila.c.obj: CMakeFiles/asincrona3.dir/flags.make
CMakeFiles/asincrona3.dir/pila.c.obj: ../pila.c
CMakeFiles/asincrona3.dir/pila.c.obj: CMakeFiles/asincrona3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/asincrona3.dir/pila.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/asincrona3.dir/pila.c.obj -MF CMakeFiles\asincrona3.dir\pila.c.obj.d -o CMakeFiles\asincrona3.dir\pila.c.obj -c C:\Users\52332\CLionProjects\asincronica3\pila.c

CMakeFiles/asincrona3.dir/pila.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/asincrona3.dir/pila.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\52332\CLionProjects\asincronica3\pila.c > CMakeFiles\asincrona3.dir\pila.c.i

CMakeFiles/asincrona3.dir/pila.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/asincrona3.dir/pila.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\52332\CLionProjects\asincronica3\pila.c -o CMakeFiles\asincrona3.dir\pila.c.s

# Object files for target asincrona3
asincrona3_OBJECTS = \
"CMakeFiles/asincrona3.dir/main.c.obj" \
"CMakeFiles/asincrona3.dir/pila.c.obj"

# External object files for target asincrona3
asincrona3_EXTERNAL_OBJECTS =

asincrona3.exe: CMakeFiles/asincrona3.dir/main.c.obj
asincrona3.exe: CMakeFiles/asincrona3.dir/pila.c.obj
asincrona3.exe: CMakeFiles/asincrona3.dir/build.make
asincrona3.exe: CMakeFiles/asincrona3.dir/linklibs.rsp
asincrona3.exe: CMakeFiles/asincrona3.dir/objects1.rsp
asincrona3.exe: CMakeFiles/asincrona3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable asincrona3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\asincrona3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asincrona3.dir/build: asincrona3.exe
.PHONY : CMakeFiles/asincrona3.dir/build

CMakeFiles/asincrona3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\asincrona3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/asincrona3.dir/clean

CMakeFiles/asincrona3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\52332\CLionProjects\asincronica3 C:\Users\52332\CLionProjects\asincronica3 C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug C:\Users\52332\CLionProjects\asincronica3\cmake-build-debug\CMakeFiles\asincrona3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asincrona3.dir/depend

