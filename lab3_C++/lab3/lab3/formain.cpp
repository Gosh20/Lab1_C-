#include <cmath>
#include <iostream>
#include "header.h"
using namespace std;


int main()
{
    int n;
    double eps;
    int k, nomer, nomer1;
tryagain: ///checkpoint

    cout << "1.Menu \n2.Exit\n";
    cin >> nomer1;
    switch (nomer1)
    {
    case(1):
        cout << "\n1. Zadanie 1 summ(int n)\n";
        cout << "2. Zadanie 2 summ2(double eps)\n";
        cout << "3. Zadanie 3 print(int n ,int k)\n";
        cout << "4. Zadanie 4 findFirstElement(double eps)\n";
        cout << "5. Zadanie 5 findFirstNegativeElement(double eps)\n";
        break;
    default:
        goto exit;
        break;
    }
    cout << "vedite nomer=";
    cin >> nomer;


    switch (nomer)
    {
    case(1):
        system("cls");
        cout << "Vvedite n = ";
        cin >> n;
        cout << "Summa = " << summ(n) << "\n";

        goto  tryagain;
        break;
    case(2):
        system("cls");

        cout << "\nvvedite tochnost=";
        cin >> eps;
        cout << "summa s tiocnostu =" << summ2(eps) << "\n";
        goto  tryagain;
        break;
    case(3):
        system("cls");
        cout << "Vvedite n = ";
        cin >> n;
        cout << summ(n);
        cout << "\nVvedite k =";
        cin >> k;
        vprint(n, k);
        goto  tryagain;
        break;
    case(4):
        system("cls");
        cout << "Vvedite n = ";
        cin >> n;
        cout << summ(n);
        cout << "\nvvedite tochnost=";
        cin >> eps;
        cout << "\nnomet pervogo chlena |a(i)|<=eps " << findFirstElement(eps) << "\n";
        goto  tryagain;
        break;
    case(5):
        system("cls");
        cout << "Vvedite n = ";
        cin >> n;
        cout << summ(n);
        cout << "\nvvedite tochnost=";
        cin >> eps;
        cout << "\nnomer pervogo chlena |a(i)|<=eps & a(i)<0   n=" << findFirstNegativeElement(eps) << "\n";
        goto  tryagain;
        break;
    case(6):
    exit:
        system("cls");
        break;

    }
}
