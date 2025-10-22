#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  long seconds;
  double minutes, hours, days, months, years;
  cout << "Enter the number of seconds that have\n";
  cout << "elapsed since some time in the past and\n";
  cout << "I will tell you how many minutes, hours,\n";
  cout << "days, months, and years have passed.\n";
  cin >> seconds;
  minutes = seconds / 60;
  hours = minutes / 60;
  days = hours / 24;
  years = days / 365;
  months = years * 12;
  cout << setprecision(4) << fixed << showpoint << right;
  cout << "Minutes: " << setw(6) << minutes << endl;
  cout << "Hours: " << setw(6) << hours << endl;
  cout << "Days: " << setw(6) << days << endl;
  cout << "Months: " << setw(6) << months << endl;
  cout << "Years: " << setw(6) << years << endl;
  return 0;
}