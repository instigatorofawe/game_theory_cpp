#include "deck/suit.h"

std::ostream &operator<<(std::ostream &os, const Suit &s)
{
    switch (s)
    {
    case CLUBS:
        os << "c";
        break;

    case SPADES:
        os << "s";
        break;

    case HEARTS:
        os << "h";
        break;

    case DIAMONDS:
        os << "d";
        break;
    default:
    }

    return os;
}