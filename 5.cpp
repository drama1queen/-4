#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	int x, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (x < 0)
		{
			cout << x;
			break;
		}
	}
}