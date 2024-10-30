#include <iostream>

using namespace std;

class MyClass
{
private:
  int my_var = 1;

public:
  // This fails
  // void increment_my_var()
  // {
  //   my_var++;
  // }

  // This fails
  // void decrement_my_var()
  // {
  //   my_var--;
  // }

  // This fails
  // void pp()
  // {
  //   cout << my_var << endl;
  // }

  // This works
  void pp() const
  {
    cout << my_var << endl;
  }
};

int main()
{
  const MyClass c;
  c.pp();

  // c.increment_my_var();
  // c.pp();

  // c.decrement_my_var();
  // c.pp();

  return 0;
}
