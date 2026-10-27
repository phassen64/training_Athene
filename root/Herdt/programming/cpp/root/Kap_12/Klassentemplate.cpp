#include <iostream>
using namespace std;
template <class T>
class Feld
{
  private:
    int Len, Pos;
    T *Data;
 public:
    Feld(int len);
    ~Feld();
    void Add(T t);
    T Get(int Pos);
};
template <class T>
Feld<T>::Feld(int len)
{
  Pos = 0;
  Len = len;
  Data = new T[len];
}
template <class T>
Feld<T>::~Feld()
{
  delete[] Data;
}
template <class T>
void Feld<T>::Add(T t)
{
  *(Data + Pos) = t;
  Pos++;
}
template <class T>
T Feld<T>::Get(int Pos)
{
  return *(Data + Pos - 1);
}
int main()
{
  Feld<int> IntFeld(10);
  IntFeld.Add(1);
  IntFeld.Add(2);
  IntFeld.Add(3);
  cout << "Der Inhalt des 2. Elements ist " << IntFeld.Get(2);
  cin.get();
  return 0;
}

