#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, a, b;
	cin >> x;
	a = x / 10;
	b = x % 10;
	for (int i = (a + b); i <= (a * b); i++)
	{
		cout << i << endl;
	}
}