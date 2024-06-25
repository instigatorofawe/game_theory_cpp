#include <gtest/gtest.h>
#include "kuhn/kuhn.h"

TEST(test_kuhn, test_kuhn_deck)
{
    Deck d = kuhn_deck();

    EXPECT_EQ(d.size(), 3);
    EXPECT_FALSE(d.contains(Card(ACE, SPADES)));
    EXPECT_FALSE(d.contains(Card(TWO, SPADES)));
}