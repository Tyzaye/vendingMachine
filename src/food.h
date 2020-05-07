#ifndef FOOD_H
#define FOOD_H
#include "snack.h"

class Food:public Snack
{
public:
    Food(string b, string t, string name, double price, bool s);
    void ifSelected();
};

#endif // FOOD_H
