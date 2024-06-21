#include "deck/card.h"

Card::Card(Rank rank, Suit suit)
{
    this->rank = rank;
    this->suit = suit;
}

std::ostream &operator<<(std::ostream &os, const Card &c)
{
    os << c.rank << c.suit;
    return os;
}

bool operator==(const Card &c, const Card &d)
{
    return c.rank == d.rank && c.suit == d.suit;
}

bool operator!=(const Card &c, const Card &d)
{
    return c.rank != d.rank || c.suit != d.suit;
}