#include <iostream>
using namespace std;

bool isValid(char argument)
{
  return (argument >= 'A' && argument <= 'F');
}

int main()
{
  char inputChar;
  cout << "Enter a character: ";
  cin >> inputChar;

  if (isValid(inputChar))
    cout << inputChar << " is a valid uppercase letter." << endl;
  else
    cout << inputChar << " is not a valid uppercase letter." << endl;

  return 0;
}
