#include <gtest/gtest.h>
#include <iostream>

#include "omp/EquityCalculator.h"

TEST(test_ompeval, test_equity)
{
    omp::EquityCalculator eq;
    eq.start({"AsKs", "QhQd"});
    eq.wait();

    auto r = eq.getResults();
    std::cout << r.equity[0] << " " << r.equity[1] << std::endl;

    eq.start({"AsKs", "8h8d"});
    eq.wait();

    auto s = eq.getResults();
    std::cout << r.equity[0] << " " << r.equity[1] << std::endl;
}