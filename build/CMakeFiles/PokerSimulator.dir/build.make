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
CMAKE_SOURCE_DIR = /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build

# Include any dependencies generated for this target.
include CMakeFiles/PokerSimulator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PokerSimulator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PokerSimulator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PokerSimulator.dir/flags.make

PokerSimulator_autogen/timestamp: /home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/./libexec/moc
PokerSimulator_autogen/timestamp: /home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/./libexec/uic
PokerSimulator_autogen/timestamp: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target PokerSimulator"
	/usr/bin/cmake -E cmake_autogen /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles/PokerSimulator_autogen.dir/AutogenInfo.json Release
	/usr/bin/cmake -E touch /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/PokerSimulator_autogen/timestamp

CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o: PokerSimulator_autogen/mocs_compilation.cpp
CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o -MF CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/PokerSimulator_autogen/mocs_compilation.cpp

CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/PokerSimulator_autogen/mocs_compilation.cpp > CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.i

CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/PokerSimulator_autogen/mocs_compilation.cpp -o CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.s

CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Poker_game.cpp
CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Poker_game.cpp

CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Poker_game.cpp > CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.i

CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Poker_game.cpp -o CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.s

CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability.cpp
CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability.cpp

CMakeFiles/PokerSimulator.dir/src/Probability.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/Probability.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability.cpp > CMakeFiles/PokerSimulator.dir/src/Probability.cpp.i

CMakeFiles/PokerSimulator.dir/src/Probability.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/Probability.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability.cpp -o CMakeFiles/PokerSimulator.dir/src/Probability.cpp.s

CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability_calculator.cpp
CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability_calculator.cpp

CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability_calculator.cpp > CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.i

CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/Probability_calculator.cpp -o CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.s

CMakeFiles/PokerSimulator.dir/src/card.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/card.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/card.cpp
CMakeFiles/PokerSimulator.dir/src/card.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PokerSimulator.dir/src/card.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/card.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/card.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/card.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/card.cpp

CMakeFiles/PokerSimulator.dir/src/card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/card.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/card.cpp > CMakeFiles/PokerSimulator.dir/src/card.cpp.i

CMakeFiles/PokerSimulator.dir/src/card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/card.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/card.cpp -o CMakeFiles/PokerSimulator.dir/src/card.cpp.s

CMakeFiles/PokerSimulator.dir/src/main.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/main.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/main.cpp
CMakeFiles/PokerSimulator.dir/src/main.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PokerSimulator.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/main.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/main.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/main.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/main.cpp

CMakeFiles/PokerSimulator.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/main.cpp > CMakeFiles/PokerSimulator.dir/src/main.cpp.i

CMakeFiles/PokerSimulator.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/main.cpp -o CMakeFiles/PokerSimulator.dir/src/main.cpp.s

CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/opponents.cpp
CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/opponents.cpp

CMakeFiles/PokerSimulator.dir/src/opponents.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/opponents.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/opponents.cpp > CMakeFiles/PokerSimulator.dir/src/opponents.cpp.i

CMakeFiles/PokerSimulator.dir/src/opponents.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/opponents.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/opponents.cpp -o CMakeFiles/PokerSimulator.dir/src/opponents.cpp.s

CMakeFiles/PokerSimulator.dir/src/table.cpp.o: CMakeFiles/PokerSimulator.dir/flags.make
CMakeFiles/PokerSimulator.dir/src/table.cpp.o: /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/table.cpp
CMakeFiles/PokerSimulator.dir/src/table.cpp.o: CMakeFiles/PokerSimulator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PokerSimulator.dir/src/table.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PokerSimulator.dir/src/table.cpp.o -MF CMakeFiles/PokerSimulator.dir/src/table.cpp.o.d -o CMakeFiles/PokerSimulator.dir/src/table.cpp.o -c /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/table.cpp

CMakeFiles/PokerSimulator.dir/src/table.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/PokerSimulator.dir/src/table.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/table.cpp > CMakeFiles/PokerSimulator.dir/src/table.cpp.i

CMakeFiles/PokerSimulator.dir/src/table.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/PokerSimulator.dir/src/table.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/src/table.cpp -o CMakeFiles/PokerSimulator.dir/src/table.cpp.s

# Object files for target PokerSimulator
PokerSimulator_OBJECTS = \
"CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/card.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/main.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o" \
"CMakeFiles/PokerSimulator.dir/src/table.cpp.o"

# External object files for target PokerSimulator
PokerSimulator_EXTERNAL_OBJECTS =

PokerSimulator: CMakeFiles/PokerSimulator.dir/PokerSimulator_autogen/mocs_compilation.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/Poker_game.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/Probability.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/Probability_calculator.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/card.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/main.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/opponents.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/src/table.cpp.o
PokerSimulator: CMakeFiles/PokerSimulator.dir/build.make
PokerSimulator: /home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/lib/libQt6Widgets.so.6.6.2
PokerSimulator: /home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/lib/libQt6Gui.so.6.6.2
PokerSimulator: /home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/lib/libQt6Core.so.6.6.2
PokerSimulator: /usr/lib/x86_64-linux-gnu/libGLX.so
PokerSimulator: /usr/lib/x86_64-linux-gnu/libOpenGL.so
PokerSimulator: CMakeFiles/PokerSimulator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable PokerSimulator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PokerSimulator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PokerSimulator.dir/build: PokerSimulator
.PHONY : CMakeFiles/PokerSimulator.dir/build

CMakeFiles/PokerSimulator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PokerSimulator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PokerSimulator.dir/clean

CMakeFiles/PokerSimulator.dir/depend: PokerSimulator_autogen/timestamp
	cd /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build /home/silviu/Desktop/OpenSourceProjects/PokerOddsCalculator/build/CMakeFiles/PokerSimulator.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/PokerSimulator.dir/depend
