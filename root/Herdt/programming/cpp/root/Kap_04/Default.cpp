#include <iostream>
using namespace std;
void ausgabe(int zahl, int flag = 0)  
{
  if(flag == 0)
    cout << dec << zahl << endl; 
  else
    cout << hex << zahl << endl; 
}
int main()
{
  ausgabe(1233);		
  ausgabe(1233, 1);		
  cin.get();
  return 0;
}

