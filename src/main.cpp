#include <QCoreApplication>
#include <iostream>
#include "food.cpp"
using namespace std;

int main()
{
    Snack twix("Mars, Inc.", "Chocolate bar", "Twix", 1.50, true);
    Snack york("Hershy", "Confectionery", "York Peppermint Patties", 2.10, true);
    double total = twix.getCost();
    cout << total << endl;
}
