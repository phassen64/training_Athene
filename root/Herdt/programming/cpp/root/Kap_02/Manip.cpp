#include <iostream>
#include  <iomanip>
using namespace std;
int main()
{
  cout << setfill('.');
  cout << setiosflags(ios::left) << setw(30) << "Einfuehrung" << resetiosflags(ios::left);
  cout << setw(5) << setiosflags(ios::right) << 5 << endl;
  cout << resetiosflags(ios::right) << setiosflags(ios::left) << setw(30) <<"Referenz" << resetiosflags(ios::left);
  cout << setiosflags(ios::right) << setw(5) << 28 <<  endl;
  cout << resetiosflags(ios::right) << setiosflags(ios::left) << setw(30) << "Uebungen" << resetiosflags(ios::left);
  cout << setiosflags(ios::right) << setw(5) << 45 << endl;
  cin.peek();
  return 0; 
}

