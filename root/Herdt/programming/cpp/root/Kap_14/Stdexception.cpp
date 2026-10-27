#include <iostream>
#include <stdexcept>

using namespace std;
// Funktion, die eine Standard-Exception erzeugt.
void ausnahme(int i)
{
  if(i < 0 || i > 100)
    throw invalid_argument("ausnahme(): Ungueltiges Argument!");
  cout << endl << "Funktion regulaer beendet!" << endl;
}
int main()
{
  try
  {
    ausnahme(5);
    try
    {
      ausnahme(-5);
    }
    catch(invalid_argument& err)
    {
      cerr << endl << "Exception-Handler fuer invalid_argument!" << endl;
      cerr << err.what() << endl;
    }
    ausnahme(-1);
  }
  catch(const exception& err)
  {
    cerr << endl << "Handler fuer alle Standard-Exceptions!" << endl;
    cerr << err.what() << endl;
  }
  catch(...)
  {
    cerr << endl << "Unbekannte Exception!" << endl;
  }
  cin.get();
  return 0;
}




