#include "deck/rank.h"

std::ostream &operator<<(std::ostream &os, const Rank &r)
{
    switch (r)
    {
    case TWO:
        os << "2";
        break;
    case THREE:
        os << "3";
        break;
    case FOUR:
        os << "4";
        break;
    case FIVE:
        os << "5";
        break;
    case SIX:
        os << "6";
        break;
    case SEVEN:
        os << "7";
        break;
    case EIGHT:
        os << "8";
        break;
    case NINE:
        os << "9";
        break;
    case TEN:
        os << "T";
        break;
    case JACK:
        os << "J";
        break;
    case QUEEN:
        os << "Q";
        break;
    case KING:
        os << "K";
        break;
    case ACE:
        os << "A";
        break;
    }
    return os;
}