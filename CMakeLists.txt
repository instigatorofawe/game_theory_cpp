enable_testing()

cmake_minimum_required(VERSION 3.29)
project(game_theory)

include_directories(.)

add_subdirectory(deck)
add_subdirectory(kuhn)
add_subdirectory(test)
