#include <iostream>
#include <iomanip>
using namespace std;
struct Computer
{
  double speed, price;
  int cores, ram, disk, benchmark;
};
Computer inventory[100];
int total = 0;
double getValidInput(string prompt)
{
  double val;
  do
  {
    cout << prompt;
    cin >> val;
    if (val < 0)
      cout << "invalid input\n";
  } while (val < 0);
  return val;
}
void addConfig()
{
  if (total >= 100)
  {
    cout << "inventory full\n";
    return;
  }
  cout << "input speed(GHz), cores, RAM(GB), disk(GB): ";
  cin >> inventory[total].speed >> inventory[total].cores >> inventory[total].ram >> inventory[total].disk;
  inventory[total].benchmark = (int)getValidInput("input benchmark: ");
  inventory[total].price = getValidInput("input price: ");
  total++;
}
void updatePrice()
{
  int id;
  cout << "input id number: ";
  cin >> id;
  if (id >= 1 && id <= total)
  {
    inventory[id - 1].price = getValidInput("input new price: ");
  }
  else
  {
    cout << "invalid id\n";
  }
}
void showData()
{
  for (int i = 0; i < total; i++)
  {
    cout << "\nnumber: " << (i + 1) << endl;
    cout << "  speed: " << inventory[i].speed << " GHz" << endl;
    cout << "  core: " << inventory[i].cores << endl;
    cout << "  RAM : " << inventory[i].ram << " GB" << endl;
    cout << "  disk: " << inventory[i].disk << " GB" << endl;
    cout << "  benchmark: " << inventory[i].benchmark << endl;
    cout << "  price: $" << fixed << setprecision(2) << inventory[i].price << endl;
  }
}
int main()
{
  int choice;
  do
  {
    cout << "\n1. add computer\n2. change price\n3. show all\n4. exit\nchoice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      addConfig();
      break;
    case 2:
      updatePrice();
      break;
    case 3:
      showData();
      break;
    case 4:
      cout << "exit...\n";
      break;
    default:
      cout << "invalid\n";
    }
  } while (choice != 4);

  return 0;
}