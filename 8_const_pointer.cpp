#include <iostream>

using namespace std;

int main()
{
  int x = 100;
  int *const px = &x;

  cout << "The value of x is " << x << endl;
  cout << "The value of px is " << px << endl;
  cout << "The value of *px is " << *px << endl;

  // This is ok
  *px = 5;

  // Fails
  // px++;

  cout << "The value of x is " << x << endl;
  cout << "The value of px is " << px << endl;
  cout << "The value of *px is " << *px << endl;
}
