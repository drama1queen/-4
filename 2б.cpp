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
        cout << "влево" << endl;
        break;
    case 2:
        cout << "вверх" << endl;
        break;
    case 3:
        cout << "вправо" << endl;
        break;
    case 4:
        cout << "вниз" << endl;
        break;
    default:
        cout << "error";
    }
    if (x == 1 || x == 3)
    {
        cout << "горизонтально";
    }
    if (x==2 || x==4)
    {
        cout << "вертикально";
    }
}