#include <QtTest>

#include "food.h"
// add necessary includes here

class selectedtest : public QObject
{
    Q_OBJECT

public:
    selectedtest();
    ~selectedtest();

private slots:
    void test_case1();

};

selectedtest::selectedtest()
{

}

selectedtest::~selectedtest()
{

}

void selectedtest::test_case1()
{
    Snack twix("Mars, Inc.", "Chocolate bar", "Twix", 1.50, true);
    Snack york("Hershy", "Confectionery", "York Peppermint Patties", 2.10, true);
    //twix.ifSelected();
    double total = twix.getCost();
    QCOMPARE(total, 1.50);
    //york.ifSelected();
    total = york.getCost();
    QCOMPARE(total, 2.10);
}

QTEST_APPLESS_MAIN(selectedtest)

#include "tst_selectedtest.moc"
