#include <iostream>
using namespace std;
int &findmax(int feld[], int anz)
{            
  int max = 0;                              
  if(anz > 0)  
    for(int i = 0; i < anz; i++)
      if(feld[i] > feld[max])
        max = i;                
  return feld[max];
}      
int main()
{ 
  int liste[10] = {12, 165, 4, 3345, 345, 3434, 34, 87, 11, 100}; 
  cout << "Der groesste Wert der Liste ist " << findmax(liste, 10) << endl; 
  cin.peek();
  return 0;
}

