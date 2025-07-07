#include<string>
#include<array>
#include "Card.h"
using namespace std;

// Comment 2: The constructor receives two parameters for a card, face and suit.
Card::Card(int faceNum, int suitNum)
    : face(faceNum), suit(suitNum)
{
}

// Comment 3: Return the face of the card for toString() to print out.
string Card::staticArrayFace(int face)
{
    static array<string, 13> arrayFace = 
    {
        "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };
    return arrayFace[face];
}

// Comment 4: Return the suit of the card for toString() to print out.
string Card::staticArraySuit(int suit)
{
    static array<string, 4> arraySuit = { "Hearts", "Diamonds", "Clubs", "Spades" };
    return arraySuit[suit];
}

// Comment 5: Print out the face and suit of the card from the arrayFace and arraySuit.
string Card::toString()
{
    return staticArrayFace(face) + " of " + staticArraySuit(suit);
}