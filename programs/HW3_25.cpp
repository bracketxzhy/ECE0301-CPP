#include <iostream>
using namespace std;
int main()
{
  double max, used, available;
  cout << "Enter the maximum amount of credit: ";
  cin >> max;
  cout << "Enter the amount of credit used: ";
  cin >> used;
  available = max - used;
  cout << "The available credit is: " << available << endl;
  return 0;
}