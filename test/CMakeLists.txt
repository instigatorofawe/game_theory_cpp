find_package(GTest REQUIRED)
include(GoogleTest)

find_library(ompeval_path REQUIRED NAMES ompeval)

add_executable(run_unit_tests test_trivial.cpp test_deck.cpp test_kuhn.cpp test_combinatorics.cpp test_ompeval.cpp)
target_link_libraries(run_unit_tests deck kuhn combinatorics GTest::gtest GTest::gtest_main ${ompeval_path} pthread)

gtest_discover_tests(run_unit_tests)