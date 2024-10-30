#include <iostream>

int addOne(int num)
{
  return num + 1;
}

int main()
{
  std::cout << "All of the Following Work!" << std::endl;
  int i = 5;
  const int j = 7;

  std::cout << "Function Calls" << std::endl;
  std::cout << addOne(i) << std::endl;
  std::cout << addOne(j) << std::endl;

  std::cout << "Arithmetic" << std::endl;
  std::cout << i + j << std::endl;

  std::cout << "Scoped Variables of the Same Name" << std::endl;
  for (int x = 0; x < j; x++)
  {
    std::cout << x << std::endl;
  }

  for (int j = 0; j < 10; j++)
  {
    std::cout << j << std::endl;
  }

  // This does not...
  // i = 6;
  // j = 8;

  // std::cout << i + j << std::endl;

  return 0;
}
