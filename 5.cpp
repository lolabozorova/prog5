#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    float x, y, y1;
    cout << "Введите x:";
    cin >> x;
    y = x;
    y1 = x;
    while ((y1==x) || (abs(y1 - y) >= pow(10, -5)))
    {
        y = y1;
        y1 = 0.5 * (y1 + 3 * x / (2 * pow(y1, 2) + x / y1));
    }
    cout << y1;
    return 0;
}