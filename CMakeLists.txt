cmake_minimum_required(VERSION 3.22)
project(LTCC)

set(CMAKE_CXX_STANDARD 23)

add_executable(LTCC scoreReport.cpp main.cpp ttt.cpp CCC/15J2.cpp CCC/16J2.cpp CCC/16J3.cpp CCC/17J2.cpp CCC/17J4.cpp CCC/17J4-ALT.cpp)

add_executable(scoreReport scoreReport.cpp)
add_executable(15J2 CCC/15J2.cpp CCC/14J3.cpp)
add_executable(14J3 CCC/14J3.cpp)
add_executable(11J3 CCC/11J3.cpp)
add_executable(16J2 CCC/16J2.cpp)
add_executable(16J3 CCC/16J3.cpp)
add_executable(17J2 CCC/17J2.cpp)
add_executable(17J4 CCC/17J4.cpp)
add_executable(17J4-ALT CCC/17J4-ALT.cpp)