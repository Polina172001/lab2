#include <iostream>
using namespace std;

double f(double x) 
{
	cout << "\n x = " << (x <= 3 ? (pow(x, 2)) - (3 * x) + 9 : 1 / (pow(x, 3) + 6));
	return 0;
}


void main()
{
   cout << f(4.0);
   cout << f(0.3);
   cout << f(-1.5);
}


