#include <iostream>
#include "header.h"

using namespace std;

void vprint(int n, int k)
{
    int count = 1;
    double a = 0;
    for (int i = 0; i < n; i++)
    {
        if (count != k)
        {
            count++;
            a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
            cout << "n=" << i << " " << "f=" << a << "\n";
        }
        else {
            count = 1;
            continue;
        }
    }
        

}