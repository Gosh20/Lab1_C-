#include <iostream>

using namespace std;

bool isInArea(double x, double y) {    //  функция для определения координат рисунка и сравнения его(попадает или нет)
	if (x >= 0 and y >= -1 and x <= 1 and y <= 1) {
		return 1;
	}
	else if (x >= -1 and y >= -1  and x < 0  and y <= 1 and pow(x, 2) + pow(y, 2) <= 1) {
		return 1;
	}
	return 0;
}

void main() {
	cout << isInArea(-0.4, 0.4) << endl; // 1
	cout << isInArea(-1, -0.4) << endl; // 0
	cout << isInArea(1, 1) << endl; // 1
	cout << isInArea(-0.9, -0.6) << endl; // 0
	cout << isInArea(0.9, -0.4) << endl; // 1
}

