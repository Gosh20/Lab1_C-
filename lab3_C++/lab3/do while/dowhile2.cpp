#include <iostream>
#include "header.h"

using namespace std;


double summ2(double eps)
{

	double sum = 0;
	double a;
	int i = -1;
	a = (pow(2, sizeof(float) * 8.0 - 1) - 1); // max znachenie double
	do
	{
		i++;
		a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		sum += a;
		cout << "n=" << i << "   " << "f=" << a << "\n";

	} while (abs(a) > eps);
	return sum;
}
