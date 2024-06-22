find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(run_unit_tests test_trivial.cpp test_deck.cpp test_kuhn.cpp)
target_link_libraries(run_unit_tests deck kuhn GTest::gtest GTest::gtest_main)

gtest_discover_tests(run_unit_tests)