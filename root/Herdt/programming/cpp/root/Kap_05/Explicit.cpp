#include <iostream>
using namespace std;
class X
{
  private:
    int i;
    char s;
  public:
    X(int p){i = p; s = '#';}
    X(char r, int p = 0){s = r; i = p;}

    void Ausgabe()
    {
      cout << "Ausgabe von Objekten der Klasse X: " << endl;
      cout << "i = " << i << endl;
      cout << "s = " << s << endl << endl;
      return;
    }
};

class Y
{
  private:
    int i;
    char s;
  public:
    explicit Y(int p){i = p; s = '#';}
    explicit Y(char r, int p = 0){s = r; i = p;}
    
    void Ausgabe()
    {
      cout << "Ausgabe von Objekten der Klasse X: " << endl;
      cout << "i = " << i << endl;
      cout << "s = " << s << endl << endl;
      return;
    }
};
int main()
{
    X a = 1;
    X b = X(2);  // Zuweisung einer temporären Instanz der Klasse X zu b
    X c(3);
    X d = 'D';
    X e = X('E');
    X f('F');
 
    a.Ausgabe();
    b.Ausgabe();
    c.Ausgabe();
    d.Ausgabe();
    e.Ausgabe();
    f.Ausgabe();

//---------- mit explicit ------
//    Y g = 1;    //  !Fehler!, nun nicht mehr möglich
    Y h = Y(2); // Zuweisung der temporären Instanz der Klasse Y zu h
    Y i(3);
//    Y j = 'J'; // !Fehler!, nun nicht mehr möglich
    Y k = Y('K');
    Y l('L');
  
   // g.Ausgabe();
    h.Ausgabe();
    i.Ausgabe();
   // j.Ausgabe();
    k.Ausgabe();
    l.Ausgabe();
  cin.get();
  return 0;
}
