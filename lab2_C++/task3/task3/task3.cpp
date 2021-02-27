#include <iostream>

using namespace std;


bool IsinArea(double x, double y);
double f(double x); 
// объявляем обу фунуции

void main() // вызов через кейсы
{
    double x, y;
    int k;
    cout << "vibor task 1 or 2 \n";
    cin >> k;
    switch (k)
    {
    case 1:
        cout << "vvedite x = ";
        cin >> x;
        cout << "vvedite y = ";
        cin >> y;
        if (IsinArea(x, y) == 1)
            cout << "vi popali";
        else
            cout << "vi ne popali";
        break;
    case 2:
        cout << "vvedite x = ";
        cin >> x;
        cout << "Funkciya = " << f(x);
        break;
    default:
        cout << "Neverniy vvod";
        break;
    }

}

double f(double x)
{
    if (x <= 3)
        return pow(x, 2) - 3 * x + 9;
    else
        return 1 / (pow(x, 3) + 6);

}

bool IsinArea(double x, double y)
{

    if (x >= 0 and y >= -1 and x <= 1 and y <= 1) {
        return 1;
    }
    else if (x >= -1 and y >= -1 and x < 0 and y <= 1 and pow(x, 2) + pow(y, 2) <= 1) {
        return 1;
    }
    return 0;
}




