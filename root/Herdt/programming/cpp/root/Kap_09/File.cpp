#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream LogFile("C:\Log.txt");       // Log-Datei öffnen
  streambuf* sbuf = cout.rdbuf();
  cout.rdbuf(LogFile.rdbuf());
  cout << "Diese Zeile wird in die Datei geschrieben." << endl;
  cout.rdbuf(sbuf);
  cout << "Ausgabe erfolgt wieder auf dem Bildschirm" << endl;
  cin.get();
  return 0;
}  

