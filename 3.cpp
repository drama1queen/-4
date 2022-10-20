#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cin >> x >> y;
	if ((-1 < x) && (x > 1) && (y > -3) && (y < 3))
	{
		if (x * x + y * y > 4)
		{
			cout << "да";
		}
		if (x * x + y * y == 4)
		{
			cout << "на границе";
		}
	}
	else
	{
		cout << "нет";
	}
}