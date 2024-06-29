#include "kuhn/kuhn.h"

Deck kuhn_deck()
{
    auto result = Deck();
    result.add(Card(KING, SPADES));
    result.add(Card(QUEEN, SPADES));
    result.add(Card(JACK, SPADES));
    return result;
}

std::vector<float> kuhn_payout(std::vector<Card> cards)
{
    // TODO
}