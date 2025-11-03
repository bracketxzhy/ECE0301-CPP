#include <iostream>
using namespace std;
int main()
{
  double wavelength;
  cout << "The wavelength of the electromagnetic wave: ";
  cin >> wavelength;
  if (wavelength >= 1E-2)
  {
    cout << "Radio wave \n";
  }
  else if (wavelength >= 1E-3)
  {
    cout << "Microwave \n";
  }
  else if (wavelength >= 7E-7)
  {
    cout << "Infrared wave \n";
  }
  else if (wavelength >= 4E-7)
  {
    cout << "Visible light wave \n";
  }
  else if (wavelength >= 1E-8)
  {
    cout << "Ultraviolet wave \n";
  }
  else if (wavelength >= 1E-11)
  {
    cout << "X-ray \n";
  }
  else
  {
    cout << "Gamma ray \n";
  }
}
