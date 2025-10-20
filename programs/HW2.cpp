//Restaurant Bill
//Write a program that computes the tax and tip on a restaurant bill for a patron with 
//a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should 
//be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip 
// amount, and total bill on the screen.
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
