#include <iostream>
using namespace std;
int main()
{
  double gps, wifi, display, total;
  cout << "Enter the time spent using GPS: ";
  cin >> gps;
  cout << "Enter the time spent using WiFi: ";
  cin >> wifi;
  cout << "Enter the time spent with display on full brightness: ";
  cin >> display;
  total = (148 * gps) + (352 * wifi) + (197 * display);
  cout << "The total battery consumption is: " << total << " mAh" << endl;
  return 0;
}