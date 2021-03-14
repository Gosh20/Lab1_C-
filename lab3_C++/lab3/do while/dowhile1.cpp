#include <iostream>
#include "header.h"

using namespace std;
double summ(int n)
{
    int i = -1;
    double sum = 0;
    double a = 0;
    do
    {
        i++;
        a = pow(-1, i) * (1 - (2 * i - 1) / 2 * (i + 1));
        sum = sum + a;
        cout << "n=" << i << "    " << "f=" << a << "\n";
    } while ((i < n - 1));
    return (sum);
}



