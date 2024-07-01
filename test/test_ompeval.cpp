#include <gtest/gtest.h>
#include <iostream>

#include "omp/EquityCalculator.h"

TEST(test_ompeval, test_equity)
{
    for (int c = 0; c < 10; c++)
    {
        omp::EquityCalculator eq;
        eq.start({"AsKs", "QhQd"}, 0, 0, true);
        eq.wait();

        auto r = eq.getResults();
        std::cout << r.equity[0] << " " << r.equity[1] << std::endl;
    }
}

TEST(test_ompeval, test_multiprocess)
{
    std::vector<omp::EquityCalculator *> eq;

    for (int c = 0; c < 10; c++)
    {
        eq.push_back(new omp::EquityCalculator());
        eq[c]->start({"AsKs", "QhQd"}, 0, 0, true);
    }

    for (int c = 0; c < 10; c++)
    {
        eq[c]->wait();
    }

    for (int c = 0; c < 10; c++)
    {
        auto r = eq[c]->getResults();
        std::cout << r.equity[0] << " " << r.equity[1] << std::endl;

        delete eq[c];
    }
}