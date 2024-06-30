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
    std::cout << s.equity[0] << " " << s.equity[1] << std::endl;
}

TEST(test_ompeval, test_multiprocess)
{

    omp::EquityCalculator eq;
    eq.start({"AsKs", "QhQd"});

    omp::EquityCalculator eq2;
    eq2.start({"AsKs", "8h8d"});

    omp::EquityCalculator eq3;
    eq3.start({"AcKc", "2h2d"});

    eq.wait();
    eq2.wait();
    eq3.wait();

    auto r = eq.getResults();
    std::cout << r.equity[0] << " " << r.equity[1] << std::endl;

    auto s = eq2.getResults();
    std::cout << s.equity[0] << " " << s.equity[1] << std::endl;

    auto t = eq3.getResults();
    std::cout << t.equity[0] << " " << t.equity[1] << std::endl;
}