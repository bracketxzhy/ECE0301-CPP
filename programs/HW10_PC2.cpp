#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
  int yearModel;
  string make;
  int speed;

public:
  Car(int y, string m)
  {
    yearModel = y;
    make = m;
    speed = 0;
  }
  int getYearModel() const { return yearModel; }
  string getMake() const { return make; }
  int getSpeed() const { return speed; }
  void accelerate()
  {
    speed += 5;
  }

  void brake()
  {
    if (speed >= 5)
    {
      speed -= 5;
    }
    else
    {
      speed = 0;
    }
  }
};
int main()
{
  Car myCar(2024, "Porsche");

  cout << "testing current speed..." << endl;
  for (int i = 0; i < 5; i++)
  {
    myCar.accelerate();
    cout << "current speed: " << myCar.getSpeed() << endl;
  }

  cout << "\ntesting brake function..." << endl;
  for (int i = 0; i < 5; i++)
  {
    myCar.brake();
    cout << "current speed: " << myCar.getSpeed() << endl;
  }

  return 0;
}