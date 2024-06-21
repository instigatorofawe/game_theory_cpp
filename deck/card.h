#ifndef CARD_H
#define CARD_H

#include <ostream>
#include "deck/rank.h"
#include "deck/suit.h"

class Card
{
public:
    Card(Rank rank, Suit suit);
    friend std::ostream &operator<<(std::ostream &os, const Card &c);
    friend bool operator==(const Card &c, const Card &d);
    friend bool operator!=(const Card &c, const Card &d);

private:
    Rank rank;
    Suit suit;
};

#endif