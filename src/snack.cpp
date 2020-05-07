#include "snack.h"

Snack::Snack(string b, string t, string name, double price, bool s)
{
 brand = b; type = t; title = name; cost = price; selected = s;
}

string Snack::getBrand() const{
    return this->title;
}

string Snack::getType() const{
    return this->title;
}


string Snack::getTitle() const{
    return this->title;
}

double Snack::getCost() const{
    return this->cost;
}

void Snack::setCost(double c) {
    this->cost = c;
}

bool Snack::getSelected() const{
    return this->selected;
}

void Snack::setSelected(bool select) {
    this->selected = select;
}

