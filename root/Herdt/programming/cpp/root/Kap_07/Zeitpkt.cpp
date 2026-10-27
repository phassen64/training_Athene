#include <iostream>
#include <iomanip>
using namespace std;
class Datum
{
protected:
	int Tag, Monat, Jahr;
public:
	Datum(int T, int M, int J) { Tag = T; Monat = M; Jahr = J; };
	virtual void Ausgeben();
};
void Datum::Ausgeben()
{
	cout << setfill('0') << setw(2);
	cout << Tag << "." << setw(2) << Monat << "." << setw(4) << Jahr;
}
class Zeit
{
protected:
	int Stunde, Minute, Sekunde;
public:
	Zeit(int H, int Min, int S)
	{
		Stunde = H; Minute = Min; Sekunde = S;
	};
	virtual void Ausgeben();
};
void Zeit::Ausgeben()
{
	cout << setfill('0') << setw(2);
	cout << Stunde << ":" << setw(2) << Minute << ":" << setw(2) << Sekunde;
}
class Zeitpunkt : public Zeit, public Datum
{
public:
	Zeitpunkt(int T, int M, int J, int H, int Min, int S)
		: Datum(T, M, J), Zeit(H, Min, S) {}                  // Konstruktor
	void Ausgeben();
};
void Zeitpunkt::Ausgeben()
{
	Datum::Ausgeben();
	cout << ",";
	Zeit::Ausgeben();
}
int main()
{
	Zeitpunkt t(25, 10, 2017, 12, 3, 13);
	cout << "Datum und Zeit" << endl;
	t.Ausgeben();
	cout << endl << "Datum" << endl;
	t.Datum::Ausgeben();
	cout << endl << "Zeit" << endl;
	t.Zeit::Ausgeben();
	cout << endl;
	cin.peek();
	return 0;
}