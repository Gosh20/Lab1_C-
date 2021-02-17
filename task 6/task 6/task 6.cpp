// Задание 6  (файл main)
#include <iostream>

using namespace std;
extern double x, result;
void f();



void main()
{


    cout << "Input x\n";
    cin >> x;

    f();
    cout << result;
}