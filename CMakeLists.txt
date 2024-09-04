cmake_minimum_required(VERSION 3.21)
project(settings)

set(CMAKE_CXX_STANDARD 14)

add_executable(settings main.cpp Settings.h SettingsTraits.h Settings.cpp updateComment.cpp updateMaxBlockSize.cpp)
