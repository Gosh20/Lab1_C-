#include <iostream>
#include "header.h"

using namespace std;

int findFirstElement(double eps)
{
	int output;
	int i = -1;
	double a;
	a = (pow(2, sizeof(float) * 8.0 - 1) - 1); // max znachenie double
	do
	{
		i++;
		double a = (pow(-1, i)) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if
			(abs(a) <= eps)
		{
			output = i;
			break;
		}
	} while (abs(a) > eps);
	return output;
}
