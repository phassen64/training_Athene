#include <iostream>
#include <vector>
using namespace std;
template <class T>
T minneu(T a, T b)
{
  T minimum = a;
  if(a != b)
    while(++a != b)
      if(*a < *minimum)
        minimum = a;
  return(minimum);
}
int main()
{
  vector<int> v(5);
  for(int i = 0; i < 5; ++i)
    v[i] = i * i;
  cout << "Das Minimum der Quadratzahlen von 3 bis 4 ist: " << endl;
  cout << *(minneu(v.begin() + 3, v.end()));
  cin.get();
  return 0;
}

