#include <sstream>
#include <iostream>
using namespace std;
int main()
{
	char   c, t[20], s[] = "123 123.456 Hallo c ...";
	int    i;
	double d;
	istringstream str(s);
	str >> i >> d >> t >> c;	// Der String wird elementweise zerlegt
								// i==123, d==123.456, t == "Hallo", c == 'c'
	cout << "Inhalt von i: " << i << endl;
	cout << "Inhalt von d: " << d << endl;
	cout << "Inhalt von t: " << t << endl;
	cout << "Inhalt von c: " << c << endl;
	cin.get();
	return 0;
}
