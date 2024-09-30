#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c);
int main()
{
	double t, s;
		cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;
	double M = (f(1, t*t, s) + f(t, s*s, 1)) / (1 + (f(1, t*s ,1 )* f(1, t * s, 1)));
	cout << "M = " << M << endl;
	return 0;
}
double f(const double a, const double b, const double c) 
{
	return (sin(a * b * c) * sin(a * b * c)) / (a*a + b*b + c*c);
}