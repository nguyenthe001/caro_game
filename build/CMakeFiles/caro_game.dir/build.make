# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/then2/Documents/DATN/Source-TheN2/caro_game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/then2/Documents/DATN/Source-TheN2/caro_game/build

# Include any dependencies generated for this target.
include CMakeFiles/caro_game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/caro_game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/caro_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/caro_game.dir/flags.make

CMakeFiles/caro_game.dir/src/main.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/main.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/main.cpp
CMakeFiles/caro_game.dir/src/main.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/caro_game.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/main.cpp.o -MF CMakeFiles/caro_game.dir/src/main.cpp.o.d -o CMakeFiles/caro_game.dir/src/main.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/main.cpp

CMakeFiles/caro_game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/main.cpp > CMakeFiles/caro_game.dir/src/main.cpp.i

CMakeFiles/caro_game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/main.cpp -o CMakeFiles/caro_game.dir/src/main.cpp.s

CMakeFiles/caro_game.dir/src/CaroApp.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/CaroApp.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/CaroApp.cpp
CMakeFiles/caro_game.dir/src/CaroApp.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/caro_game.dir/src/CaroApp.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/CaroApp.cpp.o -MF CMakeFiles/caro_game.dir/src/CaroApp.cpp.o.d -o CMakeFiles/caro_game.dir/src/CaroApp.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/CaroApp.cpp

CMakeFiles/caro_game.dir/src/CaroApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/CaroApp.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/CaroApp.cpp > CMakeFiles/caro_game.dir/src/CaroApp.cpp.i

CMakeFiles/caro_game.dir/src/CaroApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/CaroApp.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/CaroApp.cpp -o CMakeFiles/caro_game.dir/src/CaroApp.cpp.s

CMakeFiles/caro_game.dir/src/Controller.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/Controller.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Controller.cpp
CMakeFiles/caro_game.dir/src/Controller.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/caro_game.dir/src/Controller.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/Controller.cpp.o -MF CMakeFiles/caro_game.dir/src/Controller.cpp.o.d -o CMakeFiles/caro_game.dir/src/Controller.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Controller.cpp

CMakeFiles/caro_game.dir/src/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/Controller.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Controller.cpp > CMakeFiles/caro_game.dir/src/Controller.cpp.i

CMakeFiles/caro_game.dir/src/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/Controller.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Controller.cpp -o CMakeFiles/caro_game.dir/src/Controller.cpp.s

CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/ChessBoard.cpp
CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o -MF CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o.d -o CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/ChessBoard.cpp

CMakeFiles/caro_game.dir/src/ChessBoard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/ChessBoard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/ChessBoard.cpp > CMakeFiles/caro_game.dir/src/ChessBoard.cpp.i

CMakeFiles/caro_game.dir/src/ChessBoard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/ChessBoard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/ChessBoard.cpp -o CMakeFiles/caro_game.dir/src/ChessBoard.cpp.s

CMakeFiles/caro_game.dir/src/BOT.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/BOT.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/BOT.cpp
CMakeFiles/caro_game.dir/src/BOT.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/caro_game.dir/src/BOT.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/BOT.cpp.o -MF CMakeFiles/caro_game.dir/src/BOT.cpp.o.d -o CMakeFiles/caro_game.dir/src/BOT.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/BOT.cpp

CMakeFiles/caro_game.dir/src/BOT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/BOT.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/BOT.cpp > CMakeFiles/caro_game.dir/src/BOT.cpp.i

CMakeFiles/caro_game.dir/src/BOT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/BOT.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/BOT.cpp -o CMakeFiles/caro_game.dir/src/BOT.cpp.s

CMakeFiles/caro_game.dir/src/Player.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/Player.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Player.cpp
CMakeFiles/caro_game.dir/src/Player.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/caro_game.dir/src/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/Player.cpp.o -MF CMakeFiles/caro_game.dir/src/Player.cpp.o.d -o CMakeFiles/caro_game.dir/src/Player.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Player.cpp

CMakeFiles/caro_game.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Player.cpp > CMakeFiles/caro_game.dir/src/Player.cpp.i

CMakeFiles/caro_game.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Player.cpp -o CMakeFiles/caro_game.dir/src/Player.cpp.s

CMakeFiles/caro_game.dir/src/Referee.cpp.o: CMakeFiles/caro_game.dir/flags.make
CMakeFiles/caro_game.dir/src/Referee.cpp.o: /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Referee.cpp
CMakeFiles/caro_game.dir/src/Referee.cpp.o: CMakeFiles/caro_game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/caro_game.dir/src/Referee.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/caro_game.dir/src/Referee.cpp.o -MF CMakeFiles/caro_game.dir/src/Referee.cpp.o.d -o CMakeFiles/caro_game.dir/src/Referee.cpp.o -c /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Referee.cpp

CMakeFiles/caro_game.dir/src/Referee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/caro_game.dir/src/Referee.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Referee.cpp > CMakeFiles/caro_game.dir/src/Referee.cpp.i

CMakeFiles/caro_game.dir/src/Referee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/caro_game.dir/src/Referee.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/then2/Documents/DATN/Source-TheN2/caro_game/src/Referee.cpp -o CMakeFiles/caro_game.dir/src/Referee.cpp.s

# Object files for target caro_game
caro_game_OBJECTS = \
"CMakeFiles/caro_game.dir/src/main.cpp.o" \
"CMakeFiles/caro_game.dir/src/CaroApp.cpp.o" \
"CMakeFiles/caro_game.dir/src/Controller.cpp.o" \
"CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o" \
"CMakeFiles/caro_game.dir/src/BOT.cpp.o" \
"CMakeFiles/caro_game.dir/src/Player.cpp.o" \
"CMakeFiles/caro_game.dir/src/Referee.cpp.o"

# External object files for target caro_game
caro_game_EXTERNAL_OBJECTS =

caro_game: CMakeFiles/caro_game.dir/src/main.cpp.o
caro_game: CMakeFiles/caro_game.dir/src/CaroApp.cpp.o
caro_game: CMakeFiles/caro_game.dir/src/Controller.cpp.o
caro_game: CMakeFiles/caro_game.dir/src/ChessBoard.cpp.o
caro_game: CMakeFiles/caro_game.dir/src/BOT.cpp.o
caro_game: CMakeFiles/caro_game.dir/src/Player.cpp.o
caro_game: CMakeFiles/caro_game.dir/src/Referee.cpp.o
caro_game: CMakeFiles/caro_game.dir/build.make
caro_game: CMakeFiles/caro_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable caro_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/caro_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/caro_game.dir/build: caro_game
.PHONY : CMakeFiles/caro_game.dir/build

CMakeFiles/caro_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/caro_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/caro_game.dir/clean

CMakeFiles/caro_game.dir/depend:
	cd /home/then2/Documents/DATN/Source-TheN2/caro_game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/then2/Documents/DATN/Source-TheN2/caro_game /home/then2/Documents/DATN/Source-TheN2/caro_game /home/then2/Documents/DATN/Source-TheN2/caro_game/build /home/then2/Documents/DATN/Source-TheN2/caro_game/build /home/then2/Documents/DATN/Source-TheN2/caro_game/build/CMakeFiles/caro_game.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/caro_game.dir/depend

