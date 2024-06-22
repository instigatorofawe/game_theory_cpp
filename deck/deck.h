#ifndef DECK_H
#define DECK_H

#include <vector>
#include <ostream>

#include "deck/card.h"

class Deck
{
public:
    static Deck standard_deck();

    void shuffle();

    void add(Card card);
    Card draw();
    int size() const;

    const std::vector<Card> &get_cards() const;
    std::vector<std::vector<Card> > enumerate_matchups(int n) const;

    friend std::ostream &operator<<(std::ostream &os, const Deck &d);

private:
    std::vector<Card> cards;
};

#endif