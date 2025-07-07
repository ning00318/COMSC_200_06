#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include<vector>
#include "Card.h"

// Comment 6: class DeckOfCards focus on different types (face & suit), total of 52 cards.
class DeckOfCards
{
public:
    DeckOfCards();
    void shuffle();
    Card dealCard();
    bool moreCards();
private:
    std::vector<Card> deck;
    int currentCard;
};

#endif