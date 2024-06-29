#include <gtest/gtest.h>
#include <vector>

#include "probability/combinatorics.h"

TEST(test_combinatorics, test_vector_concatenate)
{
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b = {6, 7, 8, 9, 10};
    auto result = combine_vectors(a, b);

    ASSERT_EQ(result.size(), 10);
    ASSERT_EQ(result[0], 1);
    ASSERT_EQ(result[9], 10);
}