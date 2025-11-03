#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double commission;
  double sales;
  cout << "Enter sales amount: ";
  cin >> sales;
  if (sales <= 10000.0)
  {
    commission = 0.10;
  }
  else if (sales <= 15000.0)
  {
    commission = 0.15;
  }
  else
  {
    commission = 0.20;
  }
  cout << "Commission: " << commission << endl;
  return 0;
}