cmake_minimum_required(VERSION 3.27)
project(Lab6)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab6 lab6.cpp
        item.cpp
        item.h
        book.cpp
        book.h
        comic.cpp
        comic.h)
