#include <iostream>

using namespace std;

class MyClass
{
private:
  int my_var = 1;

public:
  // This works
  void increment_my_var()
  {
    my_var++;
  }

  // This does not
  // void decrement_my_var() const
  // {
  //   my_var--;
  // }

  void pp()
  {
    cout << my_var << endl;
  }
};

int main()
{
  MyClass c;
  c.pp();

  c.increment_my_var();
  c.pp();

  // c.decrement_my_var();
  // c.pp();

  return 0;
}
