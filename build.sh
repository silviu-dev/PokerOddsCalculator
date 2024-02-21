#!/bin/sh
rm -rf build
export CMAKE_PREFIX_PATH=/home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/lib/cmake:$CMAKE_PREFIX_PATH
export Qt6_DIR=/home/silviu/Qt/Tools/QtDesignStudio/qt6_design_studio_reduced_version/lib/cmake
cmake -B build -S . -DCMAKE_BUILD_TYPE=Release
cmake --build build -t PokerSimulator
./build/PokerSimulator