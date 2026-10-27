#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector <int> T_Vector;
template <class T>
class TElem_Druck
{
  public:
    void operator()(const T& t)
    {
      cout << t << " === ";
    }
};
int main()
{
  int i;
  TElem_Druck <int> Elem_Druck;
  set <int> s1;
  set <int> s2;
  T_Vector erg(10);
  T_Vector::iterator pos;
  for(i = 1; i < 11; ++i)
    s1.insert(i);
  for(i = 1; i < 11; ++i)
    s2.insert(i * i);
  pos =set_intersection(s1.begin(),s1.end(), s2.begin(),s2.end(), erg.begin());
  // Ausgabe mit Instanz der Klasse TElem_Druck
  for_each(s1.begin(), s1.end(), Elem_Druck);
  cout << endl;
  for_each(s2.begin(), s2.end(), Elem_Druck);
  cout << endl;
  for_each(erg.begin(), pos, Elem_Druck);
  cin.get();
  return 0;
}

