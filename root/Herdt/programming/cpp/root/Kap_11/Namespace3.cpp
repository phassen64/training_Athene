#include <iostream>
#include <string>
using namespace std;
namespace Personal   // aeusserer Namensbereich
{
  namespace Kosten   // innerer Namensbereich
  {
    void Ausgaben(string Name);
  }
}
void Personal::Kosten::Ausgaben(string Name)
{
  cout << "Ausgabe fuer " << Name << endl;
}

int main()
{
  Personal::Kosten::Ausgaben("Meier");
  using namespace Personal;
  Kosten::Ausgaben("Meier");
  cin.get();
  return 0;
}

