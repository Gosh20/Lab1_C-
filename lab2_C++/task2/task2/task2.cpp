#include <iostream>

using namespace std;

double f(double x);

int main()
{
	cout << f(3.5) << endl;
	cout << f(0) << endl;
	cout << f(2) << endl;
	cout << f(1) << endl;
	cout << f(-6) << endl;
}

double f(double x) {
	if (x <= 3) {
		return pow(x, 2) - 3 * x + 9;
	}
	else if (x > 3){
		return 1 / (pow(x, 3) + 6);
	}

}

