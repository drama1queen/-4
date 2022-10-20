#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "влево";
        break;
    case 2:
        cout << "вверх";
        break;
    case 3:
        cout << "вправо";
        break;
    case 4:
        cout << "вниз";
        break;
    default:
        cout << "error";
    }
}