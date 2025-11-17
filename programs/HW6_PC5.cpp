#include <iostream>
#include <iomanip>
using namespace std;
const float g = 9.8;

double fallingDistance(int time)
{
  return 0.5 * g * time * time;
}

int main()
{
  for (int i = 1; i <= 10; i++)
  {
    cout << fallingDistance(i) << endl;
  }
}