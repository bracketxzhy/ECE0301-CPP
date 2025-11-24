#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 20;
  char correctAnswers[SIZE] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
  char studentAnswers[SIZE];
  int counter = 0;
  char answer;

  cout << "Enter the student's answers for the 20 questions (A, B, C, or D):" << endl;
  for (int i = 0; i < SIZE; i++)
  {
    cout << "Question " << (i + 1) << ": ";
    cin >> answer;
    if (answer != 'A' && answer != 'B' && answer != 'C' && answer != 'D')
    {
      cout << "Invalid input. Please enter A, B, C, or D: ";
      cin >> answer;
    }
    else
    {
      studentAnswers[i] = answer;
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    if (studentAnswers[i] == correctAnswers[i])
    {
      counter++;
    }
  }

  if (counter >= 15)
  {
    cout << "The student passed the exam." << endl;
  }
  else
  {
    cout << "The student failed the exam." << endl;
  }

  cout << "Total correct answers: " << counter << endl;
}
