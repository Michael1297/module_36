cmake_minimum_required(VERSION 3.20)
project(module_36)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/5.15.2/mingw81_64/lib/cmake")

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)