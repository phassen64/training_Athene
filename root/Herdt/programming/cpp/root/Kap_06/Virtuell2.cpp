#include <iostream>
using namespace std;
class  CTest
{
  public:
    int Z1;
    virtual  ~CTest() {cout << "Destruktor von CTest" << endl;}
};
class AbTest :public CTest
{
  public:
    int Z2;
    ~AbTest() {cout << "Destruktor von AbTest" << endl;}
};
int main()
{
  CTest *Zeiger;
  Zeiger = new AbTest;
  delete Zeiger;
  cin.get();
  return 0;
}

