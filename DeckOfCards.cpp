#include<algorithm> // swap()
#include "DeckOfCards.h"
#include "Card.h"
using namespace std;

// Comment: The constructor initializes total 52 cards in order that set up in Card class.
DeckOfCards::DeckOfCards()
{
    currentCard = 0;
    for (int face = 0; face < 13; face++)
    {
        for (int suit = 0; suit < 4; suit++)
        {
            deck.push_back(Card(face, suit));
        }
    }
}

// Comment: Swap one card in order in deck with another random value's card in deck.
void DeckOfCards::shuffle()
{
    for (int i = 0; i < deck.size(); i++)
    {
        int j = rand() % deck.size();
        swap(deck[i], deck[j]);
    }
    currentCard = 0;
}

Card DeckOfCards::dealCard()
{
    return deck[currentCard++];
}

bool DeckOfCards::moreCards()
{
    return currentCard < deck.size();
}