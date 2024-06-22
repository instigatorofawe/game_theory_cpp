#ifndef KUHN_H
#define KUHN_H

#include "deck/deck.h"

Deck kuhn_deck();

std::vector<float> kuhn_payout(std::vector<Card> cards);

#endif