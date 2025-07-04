#ifndef CARD_H
#define CARD_H
#include<string>

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