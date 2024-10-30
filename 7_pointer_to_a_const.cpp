#include <iostream>

using namespace std;

int main()
{
  const int x = 100;
  const int *px = &x;

  cout << "The value of x is " << x << endl;
  cout << "The value of px is " << px << endl;
  cout << "The value of *px is " << *px << endl;

  // Fails
  // *px = 5;

  // This is ok
  px++;

  cout << "The value of x is " << x << endl;
  cout << "The value of px is " << px << endl;
  cout << "The value of *px is " << *px << endl;
}
