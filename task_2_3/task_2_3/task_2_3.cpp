#include <iostream>
using namespace std;

bool isInArea(double x, double y)
{
	if (x <= 0 && y <= 0 && x >= -1 && y >= -1)
		return 1;
	else if (x >= 0 && y >= 0 && x + y <= 1)
		return 1;
	return 0;
}

double f(double x)
{
	cout << "\n x = " << (x <= 3 ? (pow(x, 2)) - (3 * x) + 9 : 1 / (pow(x, 3) + 6));
	return 0;
}

int main()
{
	double x, y;
    int t;
    cout << "number task = ";
    cin >> t;
	switch (t)
	{
	case 1:
		cout << "vvedite x = ";
		cin >> x;
		cout << "vvedite y = ";
		cin >> y;
		cout << isInArea(x, y);
		break;

	case 2 :
		cout << "vvedite x = ";
		cin >> x;
		f(x);
		break;

	default:
		printf("False vvod");
		break;
	}
}

