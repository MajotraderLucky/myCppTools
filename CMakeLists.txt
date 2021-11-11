cmake_minimum_required(VERSION 3.20)
project(myCppTools)

set(CMAKE_CXX_STANDARD 14)

add_executable(TwoColumnTable TwoColumnTable.cpp)
add_executable(TwoColumnTableClassAndVoids TwoColumnTableClass.cpp)
add_executable(TwoColumnTableH TwoColumnTableH.cpp)
add_executable(TwoColumnTableClassH ClassesAndVoids.h)
add_executable(CelsiusToFahrenheit CelsiusToFahrenheit.cpp)
