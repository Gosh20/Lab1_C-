/// Task1

#include <iostream>
#include <string>


using namespace std;


void main()
{
    int x;
    float f;
    x = 5;
    f = pow(cos(x), 2) - pow(sin(x), 2);
    cout.precision(4);
    cout << f;

    cin >> x;
    f = pow(cos(x), 2) - pow(sin(x), 2);
    cout << f;

}