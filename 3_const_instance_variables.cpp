#include <iostream>

using namespace std;

class CompetitivePlayer
{
private:
  const int worldRank;

public:
  // This works
  CompetitivePlayer(int r) : worldRank(r) {}

  // This does not
  // CompetitivePlayer(int worldRank)
  // {
  //   this->worldRank = worldRank;
  // }

  // This works
  int getRank()
  {
    return this->worldRank;
  }

  // This does not
  // void incrementWorldRank()
  // {
  //   this->worldRank += 1;
  // }
};

int main()
{
  return 0;
}
