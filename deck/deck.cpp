#include <algorithm>
#include <random>

#include "deck/deck.h"

Deck Deck::standard_deck()
{
    Deck result;

    for (int s = CLUBS; s < N_SUITS; s++)
    {
        for (int r = TWO; r < N_RANKS; r++)
        {
            result.add(Card(static_cast<Rank>(r), static_cast<Suit>(s)));
        }
    }

    return result;
}

void Deck::shuffle()
{
    static auto rng = std::default_random_engine();
    std::shuffle(cards.begin(), cards.end(), rng);
}

void Deck::add(Card card)
{
    this->cards.insert(this->cards.end(), card);
}

Card Deck::draw()
{
    auto result = this->cards.back();
    this->cards.pop_back();
    return result;
}

int Deck::size() const
{
    return this->cards.size();
}

bool Deck::contains(const Card &card) const
{
    return std::find(cards.begin(), cards.end(), card) != cards.end();
}

const std::vector<Card> &Deck::get_cards() const
{
    return this->cards;
}

std::vector<std::vector<Card>> Deck::enumerate_matchups(int n) const
{
    // TODO
}

std::ostream &operator<<(std::ostream &os, const Deck &d)
{
    for (const Card &c : d.get_cards())
    {
        os << c;
        os << " ";
    }
    return os;
}