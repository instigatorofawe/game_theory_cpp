#ifndef SUIT_H
#define SUIT_H

#include <ostream>

enum Suit
{
    CLUBS,
    SPADES,
    DIAMONDS,
    HEARTS,
    N_SUITS
};

std::ostream &operator<<(std::ostream &os, const Suit &s);
Suit char_to_suit(char c);

#endif