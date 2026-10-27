#include <iostream>
using namespace std;
void main()
{
  int j, i = 60, *zeiger0, *zeiger1, *zeiger2, *zeiger3;
  zeiger0 = &i;
  zeiger1 = new int;
  *zeiger1 = 12; 
  zeiger2 = new int(10);
  zeiger3 = new int[10];
  cout << "zeiger0: " << *zeiger0 << endl;
  cout << "zeiger1: " << *zeiger1 << endl;
  cout << "zeiger2: " << *zeiger2 << endl;
 
  for(j = 0; j < 10; j++)
    *(zeiger3 + j) = (j+1) * (j+1);
  for(j = 0; j < 10; j++)
    cout << j+1 << "*" << j+1 << "=" << *(zeiger3 + j) << endl;  
  delete zeiger1;
  delete zeiger2;
  delete[] zeiger3;
  cin.get();
  return;
}

