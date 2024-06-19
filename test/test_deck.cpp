#include <gtest/gtest.h>
#include "deck/rank.h"
#include "deck/suit.h"

TEST(test_deck, test_rank)
{
    EXPECT_EQ(N_RANKS, 13);
}

TEST(test_deck, test_suit)
{
    EXPECT_EQ(N_SUITS, 4);
}