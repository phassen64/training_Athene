#include <iostream>
#include <string>
using namespace std;
class Fehler
{
  private:
    char Typ[100];
  public:
    char *GetType() { return Typ; }
    void SetType(char *Value) {strcpy (Typ, Value); }
};
int main()
{
  char Str[] = "MEIN FEHLER";
  try
  {                         
     Fehler f1;       // angenommen, es tritt hier ein Fehler auf
     f1.SetType(Str); // so wird ein Exceptionobjekt erzeugt
     throw f1; 	      // und die Exception ausgelöst 
  }
  catch(Fehler &e) // fängt die Exception vom Typ Fehler ab
  {
    cout << e.GetType() << endl;	         // gibt den Typ des Fehlers aus
  }
  cin.get();
  return 0;
}

