//Задание 5   (файл main)

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
