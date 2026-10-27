#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  char str[100];
  ofstream outf("Test.txt");
  ifstream inf;
  if(outf)
    outf << "Testzeile 1" << endl << "Testzeile 2" << endl;
  outf.close();
  inf.open("Test.txt");
  while(inf.getline(str, 100))
    cout << str << endl;
  inf.close();
  cin.peek();
  return 0;
}

