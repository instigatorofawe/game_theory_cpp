#include <map>
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
        break;
    }

    return os;
}

Suit char_to_suit(char c)
{
    static std::map<char, Suit> suit_mapping = {
        {'c', CLUBS},
        {'s', SPADES},
        {'h', HEARTS},
        {'d', DIAMONDS}};

    return suit_mapping[c];
}