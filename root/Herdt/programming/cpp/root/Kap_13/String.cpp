#include <iostream>
#include <string>
using namespace std;
int main()
{
  string wort;
  wort = "hallo";
  cout << wort << endl;
  wort.assign("Neues Wort ");
  cout << wort << endl;
  wort.append("Arbeiten");
  cout << wort << endl;
  wort.append(3,'H');
  cout << wort << endl;
  cout << wort.find('H') << endl;
  cout << wort << endl;
  wort.replace(1, 3, "===");
  cout << wort << endl;
  wort.insert(3, "*****");
  cout << wort << endl;
  cout << wort.length() << " gleich " << wort.size() << endl;
  cout << wort.substr(3) << endl;
  string suchstring = "N=*";
  cout << wort.find_first_not_of(suchstring, 0) << endl;
  suchstring.assign(" ,.");
  cout << wort.find_last_of(suchstring, 12) << endl;
  cin.get();
  return 0;
}

