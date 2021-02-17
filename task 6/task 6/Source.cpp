//(файл func)



#include <iostream>

using namespace std;

void f(void); // функция без параметров

double x, result; // глобальные

void f(void)
{

    result = pow(cos(x), 2) - pow(sin(x), 2);
    cout.precision(4);

}