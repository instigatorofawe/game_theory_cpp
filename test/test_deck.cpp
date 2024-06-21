#include <gtest/gtest.h>
#include <sstream>

#include "deck/card.h"
#include "deck/rank.h"
#include "deck/suit.h"

TEST(test_deck, test_rank)
{
    EXPECT_EQ(N_RANKS, 13);

    std::stringstream s;
    s << ACE;
    EXPECT_EQ(s.str().compare("A"), 0);

    s = std::stringstream();
    s << KING;
    EXPECT_EQ(s.str().compare("K"), 0);

    EXPECT_GT(ACE, KING);
    EXPECT_GT(ACE, TWO);
}

TEST(test_deck, test_suit)
{
    EXPECT_EQ(N_SUITS, 4);
}

TEST(test_deck, test_card)
{
    Card x = Card(ACE, SPADES);

    std::stringstream s;
    s << x;
    EXPECT_EQ(s.str().compare("As"), 0);

    EXPECT_EQ(x, Card(ACE, SPADES));
    EXPECT_NE(x, Card(ACE, HEARTS));
    EXPECT_NE(x, Card(TWO, HEARTS));
}