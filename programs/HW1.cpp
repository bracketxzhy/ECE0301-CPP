#include <iostream>
using namespace std;

int main()
{
    double mealcost, tax, tip, total;
    mealcost = 88.67;
    tax = mealcost * 0.0675;
    tip = (mealcost + tax) * 0.20;
    total = mealcost + tax + tip;

    cout << "meal cost: $" << mealcost << endl;
    cout << "tax amount: $" << tax << endl;
    cout << "tip amount: $" << tip << endl;
    cout << "total bill: $" << total << endl;
    return 0;
}
