#include <iostream>
using namespace std;

int maxtimes(int *arr, int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    int presentvalue = *(arr + i);
    int tempcount = 0;
    for (int j = 0; j < size; j++)
    {
      if (*(arr + j) == presentvalue)
      {
        tempcount++;
      }
    }
    if (tempcount > count)
    {
      count = tempcount;
    }
  }
  if (count == 1)
  {
    count = -1;
  }
  return count;
}

int main()
{
  const int SIZE = 10;
  int arr[SIZE] = {1, 2, 3, 4, 5, 3, 2, 1, 3, 4};
  int result = maxtimes(arr, SIZE);
  cout << result << endl;
  return 0;
}