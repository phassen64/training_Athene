#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
class CZeit
{
  protected:
    int Stunde, Minute ;
  public:
    CZeit()
    {
      Stunde = 0;
      Minute = 0;
    }
    void Stellen(int h, int min)
    {
      Stunde = h;
      Minute = min;
    }
    void Drucke()
    {
      cout << setw(2) << setfill('0');
      cout << Stunde << ":" << setw(2) << Minute;
    }
    int Zaehlen()
    {
      if(Minute < 59)
        Minute++;
      else
      {
        Minute = 0;
        if(Stunde < 23)
          Stunde++;
        else
        {
          Stunde = 0;
          return 1;
        }
      }
      return 0;
    }
};
class CDatum
{
  protected:
    int Tag, Monat, Jahr ;
  public:
    CDatum()
    {
      Tag = 0;
      Monat = 0;
      Jahr = 0;
    }
    void Setzen(int d, int mon, int j)
    {
      Tag = d;
      Monat = mon;
      Jahr = j;
    }
    void Drucke()
    {
      cout << setw(2) << setfill('0');
      cout << Tag << "." << setw(2) << Monat << "."  << Jahr;
    }
    int Zaehlen()
    {
      if(Tag < 30)
        Tag++;
      else
      {
        Tag = 1;
        if(Monat < 12)
          Monat++;
        else
        {
          Monat = 1;
          Jahr++;
          return 0;
        }
      }
      return 0;
    }
};
class CUhr :public CZeit, public CDatum
{
  public:
    void Drucke()
    {
      CZeit::Drucke();
      cout << "  ";
      CDatum::Drucke();
    }
    void Stellen(int min, int h, int d, int mon, int j)
    {
      Setzen(d, mon, j);
      CZeit::Stellen(min, h);
    }
    int Zaehlen()
    {
      if(CZeit::Zaehlen())
        CDatum::Zaehlen();
      return 0;
    }
};
int main()
{
  char z = 'x';
  CUhr uhr;
  //z = 'x';
  uhr.Stellen(12, 56, 9, 12, 2017);
  for( ; z != 'e'; )
  {
    uhr.Drucke();
    uhr.Zaehlen();
    z = cin.get();
  }
  return 0;
}

