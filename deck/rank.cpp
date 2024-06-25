#include <map>
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
    default:
        break;
    }
    return os;
}

Rank char_to_rank(char c)
{
    static std::map<char, Rank> rank_mapping = {
        {'2', TWO},
        {'3', THREE},
        {'4', FOUR},
        {'5', FIVE},
        {'6', SIX},
        {'7', SEVEN},
        {'8', EIGHT},
        {'9', NINE},
        {'T', TEN},
        {'J', JACK},
        {'Q', QUEEN},
        {'K', KING},
        {'A', ACE}};

    return rank_mapping[c];
}