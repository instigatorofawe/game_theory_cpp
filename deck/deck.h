#ifndef DECK_H
#define DECK_H

#include <vector>
#include "deck/card.h"

class Deck
{
public:
    Deck();
    static Deck standard_deck();

    void shuffle();
    Card get();
    void add(Card card);
    int remove(Card card);

private:
    std::vector<Card> cards;
};

#endif