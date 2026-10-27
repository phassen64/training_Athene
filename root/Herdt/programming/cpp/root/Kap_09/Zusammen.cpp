#include <sstream>
#include <iostream>
using namespace std;
int main()
{
	ostringstream outStr;  // Dynamischen String-Ausgabe-Stream erzeugen
                           // Stream wie ueblich fuellen
	outStr << 2.2 * 2 << " abc";
	string output{ outStr.str() }; // Stream zusammensetzen ...
	cout << "Der zusammengestellte String selbst: " << output << endl;
	cin.get();
	return 0;
}

