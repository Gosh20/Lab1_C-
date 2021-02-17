// Задание 3

#include <iostream>

using namespace std;

double f(double x);

void main()
{
    double x;

    cout << "Input x\n";
    cin >> x;

    double res = f(x);
    cout << res;
}

double f(double x)
{
    double res;
    res = pow(cos(x), 2) - pow(sin(x), 2);
    cout.precision(4);
    return res;
}