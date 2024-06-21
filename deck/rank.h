#ifndef RANK_H
#define RANK_H

#include <ostream>

enum Rank
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    N_RANKS
};

std::ostream &operator<<(std::ostream &os, const Rank &r);

#endif