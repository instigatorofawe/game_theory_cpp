enable_testing()

cmake_minimum_required(VERSION 3.29)
set(CMAKE_CXX_STANDARD 17)
project(game_theory)

include(ExternalProject)
ExternalProject_Add(ompeval_lib GIT_REPOSITORY git@github.com:instigatorofawe/OMPEval.git PREFIX ompeval)

include_directories(.)
include_directories(ompeval/src/ompeval)

add_subdirectory(deck)
add_subdirectory(kuhn)
add_subdirectory(cfr)
add_subdirectory(probability)
add_subdirectory(test)
