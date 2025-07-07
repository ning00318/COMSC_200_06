#include<iostream>
#include<cstdlib>   // rand()
#include<ctime>     // time()
#include<iomanip>   // setw()
#include "DeckOfCards.h"
#include "Card.h"
using namespace std;

int main()
{
    srand(static_cast<int>(time(0))); 

    DeckOfCards deckOfCards;    // Comment 11: Generates a deck of 52 cards.
    deckOfCards.shuffle();      // Comment 12: Shuffle those cards.

    int count = 0;
    while (deckOfCards.moreCards())
    {
        Card card = deckOfCards.dealCard();
        cout << left << setw(18) << card.toString();
        count ++;
        if (count == 4)
        {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}