#include <iostream> 
#include <string>
#include <cctype>
using namespace std;        
#define MAX 10
class CWbuch  	
{ 
  class CEintrag  // Woerterbucheintrag = Wort + Uebersetzung
  {
    private:
      char *wort;
      char *uebersetzung;
      friend class CWbuch;
    public:
      CEintrag() : wort(0), uebersetzung(0) {}  // leeren Eintrag erzeugen
      CEintrag(char *a, char *b)	    // Eintrag mit 2 Woertern erzeugen
      {
        strcpy(wort = new char[strlen(a) + 1], a);
        strcpy(uebersetzung = new char[strlen(b) + 1], b);
      }
      ~CEintrag()				// dynamische Speicherplaetze freigeben
      {
        if(wort)
          delete wort;
        if(uebersetzung)
          delete uebersetzung;
      }
  };
  private:
    CEintrag *eintraege[MAX];
    unsigned anzahl;
  public:
    CWbuch() : anzahl(0) {}  		// leeres Woerterbuch erzeugen
    ~CWbuch()                   	// dynamische Speicherplaetze freigeben
    {
      while(anzahl)
        delete eintraege[--anzahl];
     }
    int operator()(char *a, char *b)	// neues Woerterpaar eintragen
    {
      return anzahl < MAX ? (eintraege[anzahl++] = new CEintrag(a, b) , 1) : 0;
    }
    char * operator()(char *word);		// Uebersetzung zu Wort suchen
    char * operator[](char *translation);  // Wort zur Uebersetzung suchen
};

char* CWbuch::operator()(char* word)
{
 for (unsigned i = 0; i < anzahl; ++i)
   if(!strcmp(eintraege[i] -> wort, word))
     return eintraege[i] -> uebersetzung;
 return 0;
}
char* CWbuch::operator[](char* translation)
{
 for(unsigned i = 0; i < anzahl; ++i)
   if(!strcmp(eintraege[i] -> uebersetzung, translation))
     return eintraege[i] -> wort;
 return 0;
}
int main()
{
 CWbuch wbuch;
 char auswahl;
 char dt[100], engl[100];
 char *wort;
 for(;;)                               // Endlosschleife
 {
   cout << "<N>eu" << endl << "Abfrage <D>eutsch" << endl;
   cout << "Abfrage <E>nglisch" << endl << "Ende <Q>uit" << endl;
   cin >> auswahl;
   switch(toupper(auswahl))
   {
      case 'N':	cout << "deutsches Wort : "; cin >> dt;
			cout << "englisches Wort: "; cin >> engl;
			cout << ( wbuch(dt,engl) ? "erfasst!" : "Woerterbuch voll!" );
			cout << endl;;
 			break;
	    case 'D':	cout << "englisches Wort zu ? ";
			cin >> dt;
			cout << ((wort=wbuch(dt)) ? wort : "nicht erfasst!") << endl;
	    break;
	    case 'E':	cout << "deutsches Wort zu ? ";
			cin >> engl;
			cout << ((wort=wbuch[engl]) ? wort : "nicht erfasst!");
			cout << endl;
	    break;
	    case 'Q':	return 0;
   }
 }
  return 0;
}

