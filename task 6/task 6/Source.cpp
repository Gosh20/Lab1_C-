//(���� func)



#include <iostream>

using namespace std;

void f(void); // ������� ��� ����������

double x, result; // ����������

void f(void)
{

    result = pow(cos(x), 2) - pow(sin(x), 2);
    cout.precision(4);

}