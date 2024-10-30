#include <iostream>

using namespace std;

class MyClass
{
public:
  void foobar(int u, int &v, int *w, const int x, const int &y, const int *z)
  {
    u += 1;
    v += 1;
    w += 1;
    // x += 1;
    // y += 1;
    z += 1;
  }
};

int main()
{
  int u = 1;
  int v = 1;
  int w = 1;
  int *pw = &w;

  int x = 1;
  int y = 1;
  int z = 1;
  int *pz = &z;

  MyClass c;
  c.foobar(u, v, pw, x, y, pz);

  cout << u << endl;
  cout << v << endl;
  cout << w << endl;
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;

  return 0;
}
