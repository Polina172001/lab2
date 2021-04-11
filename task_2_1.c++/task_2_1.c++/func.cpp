#include <iostream>
#include "Header.h"
using namespace std;

bool isInArea(double x, double y)
{
	if ((x <= 0 && y <= 0 && x >= -1 && y >= -1) || (x >= 0 && y >= 0 && x + y <= 1))
		return 1;
	return 0;
}
void main() 
{
	cout << isInArea(-0.7, -1);
}

