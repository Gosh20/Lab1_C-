// Задание 4

#include <iostream>

using namespace std;

void f1(void); // функция без параметров(пр функции)


double x, result; // глобальные

void  main()
{
    cout.precision(4); // формат 4 символа
    cout << "x = ";
    cin >> x;

    f1();
    cout << "f = " << result;
}
void f1(void)
{
    result = pow(cos(x), 2) - pow(sin(x), 2);
   
}