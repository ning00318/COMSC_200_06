#include<string>
#include<array>
#include "Card.h"
using namespace std;

Card::Card(int faceNum, int suitNum)
    : face(faceNum), suit(suitNum)
{
}

string Card::staticArrayFace(int face)
{
    static array<string, 13> arrayFace = 
    {
        "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };
    return arrayFace[face];
}

string Card::staticArraySuit(int suit)
{
    static array<string, 4> arraySuit = { "Hearts", "Diamonds", "Clubs", "Spades" };
    return arraySuit[suit];
}

string Card::toString()
{
    return staticArrayFace(face) + " of " + staticArraySuit(suit);
}