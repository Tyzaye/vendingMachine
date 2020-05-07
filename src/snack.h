#ifndef SNACK_H
#define SNACK_H

#include <iostream>
using namespace std;

class Snack {
private:
    string brand;
    string type;
    string title;
    double cost;
    bool selected;
public:
    Snack(string b, string t, string name, double price, bool s);
    string getBrand() const;
    string getType() const;
    string getTitle() const;
    double getCost() const;
    void setCost(double c);
    bool getSelected() const;
    void setSelected(bool select);

};

#endif // SNACK_H
