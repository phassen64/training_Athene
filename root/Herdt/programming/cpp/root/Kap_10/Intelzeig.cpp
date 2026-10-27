#include <iostream>
#include <string>
using namespace std;
class CIntellipointer
{ 
  private:
    struct stElement
    {
      char bezeichnung[80];
      int nummer;          
      stElement(): nummer(0) { strcpy(bezeichnung, "nicht vorhanden");  }
      stElement(char *bez, int nu): nummer(nu) { strcpy(bezeichnung, bez); }
    };	
    stElement *ele;
    int refs;					
  public:
    CIntellipointer(): refs(0) {} 
    CIntellipointer(char *s, int n): refs(1) { ele = new stElement(s, n); }
    ~CIntellipointer()
    {
      if(refs)
	   delete ele;
    }
    stElement * operator ->()
    {
      if(!refs)			
	   ele = new stElement, ++refs;
      return ele;
    }		
};   
int main()
{
  CIntellipointer a("aaaa", 1), b("bbbb", 2), c, d;	
  cout << a->bezeichnung << " " << a->nummer << endl;
  cout << b->bezeichnung << " " << b->nummer << endl;
  cout << c->bezeichnung << " " << c->nummer << endl;
  cout << d->bezeichnung << " " << d->nummer << endl;	
  cin.peek();
  return 0;
}
