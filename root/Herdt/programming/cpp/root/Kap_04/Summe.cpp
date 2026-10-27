#include <iostream>
using namespace std;
int summe(int a1, int a2)
{
	return a1 + a2;
}
float summe(float f1, float f2)
{
	return f1 + f2;
}
double summe(double d1, double d2)
{
	return d1 + d2;
}
int main()
{
	int i;
	float f;
	double d;
	i = summe(12, 13);
	d = summe(12.0, 12.13);
	f = summe(12.1, 12.2);
	cout << "i = " << i << endl << "d = " << d << endl << "f = " << f << endl;
	cin.peek();
	return 0;
}

