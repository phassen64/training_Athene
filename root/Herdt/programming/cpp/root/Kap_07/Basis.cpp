#include <iostream>
using namespace std;
class CMensch
{
 protected:
  int Alter;
  int Groesse;
  char Name[50];
};
class CFrau : public CMensch
{
 protected:
  int Kinder;
};
class CMann : public CMensch
{
 protected:
  int Bart; 
};
class CEhe : public CMann, public CFrau
{
};
int main()
{
}