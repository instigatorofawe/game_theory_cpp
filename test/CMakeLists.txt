find_package(GTest REQUIRED)

add_executable(run_unit_tests test_trivial.cpp)
target_link_libraries(run_unit_tests GTest::gtest GTest::gtest_main)

include(GoogleTest)

gtest_discover_tests(run_unit_tests)