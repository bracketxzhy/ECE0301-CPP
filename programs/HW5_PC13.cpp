#include <iostream>
using namespace std;

int main()
{
  float total = 0;
  for (float i = 1; i <= 10; i++)
  {
    total += 2 / i;
  }
  cout << total << endl;
  return 0;
}