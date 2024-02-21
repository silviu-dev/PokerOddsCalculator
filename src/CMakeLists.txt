set(CMAKE_PREFIX_PATH "/home")
find_package(Qt6 COMPONENTS Widgets REQUIRED)

qt_standard_project_setup()

qt_add_executable(PokerSimulator
    main.cpp
    Poker_game.ui
    Poker_game.hpp
    Poker_game.cpp
)

target_link_libraries(PokerSimulator PRIVATE Qt6::Widgets)

set_target_properties(PokerSimulator PROPERTIES
    WIN32_EXECUTABLE ON
)