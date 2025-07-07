#ifndef CARD_H
#define CARD_H
#include<string>

// Comment 1: class Card focus on the type (face & suit) of one card.
class Card
{
public:
    Card(int, int);
    std::string staticArrayFace(int);
    std::string staticArraySuit(int);
    std::string toString();

private:
    int face;
    int suit;
};

#endif