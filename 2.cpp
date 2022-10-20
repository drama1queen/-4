#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");
	double a, b, c, x1, x2, d;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if ((a != 0) && (d > 0))
	{
		x1 = (-b + sqrt(d)) / 2;
		x2 = (-b - sqrt(d)) / 2;
		cout << "два корня: " << x1 << " и " << x2;
		
	}
	if ((a != 0) && (d == 0))
	{
		x1 = (-b) / 2;
		cout << "один корень: " << x1;
	}
	if (d < 0)
	{
		cout << "error";
	}
}