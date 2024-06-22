#include <gtest/gtest.h>
#include <sstream>

#include "deck/deck.h"
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

TEST(test_deck, test_rank_mapping)
{
    EXPECT_EQ(char_to_rank('2'), TWO);
    EXPECT_EQ(char_to_rank('3'), THREE);
    EXPECT_NE(char_to_rank('3'), ACE);
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
    EXPECT_GT(x, Card(TWO, HEARTS));
}

TEST(test_deck, test_deck)
{
    Deck d;

    EXPECT_EQ(d.size(), 0);

    d.add(Card(ACE, SPADES));
    EXPECT_EQ(d.size(), 1);

    auto &x = d.get_cards();
    EXPECT_EQ(x[0], Card(ACE, SPADES));
    EXPECT_EQ(x.size(), 1);

    d.add(Card(ACE, HEARTS));
    EXPECT_EQ(d.size(), 2);

    EXPECT_EQ(x.size(), 2);
}

TEST(test_deck, test_standard_deck)
{
    Deck d = Deck::standard_deck();

    EXPECT_EQ(d.size(), 52);

    std::cout << d;
    std::cout << std::endl;

    d.shuffle();

    EXPECT_EQ(d.size(), 52);

    std::cout << d;
    std::cout << std::endl;
}