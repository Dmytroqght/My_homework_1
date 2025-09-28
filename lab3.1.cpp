//Lab_03_1.cpp
// Ганжа Дмитро
// Лабораторна робота #3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double y;
	double x;
	double e = 2.71;
	cout << "Enter x: ";
	cin >> x;
	if (x <= -1) {
		y = 2 * fabs(5 - x) - pow(e,fabs(2+x)); // powf is used for float, pow for double
	}
	else if (x > -1 && x < 1) {
		y = 2 * fabs(5 - x) - sin(1 / (fabs(2 + x)))* sin(1 / (fabs(2 + x)));
	}
	else if (x >= 2) {
		y = 2 * fabs(5 - x) - (cos(x) * cos(x) / (1 + fabs(sin(x))));
	}
	//y = 2 * fabs(5 - x) - pow(e,fabs(2+x)); // powf is used for float, pow for double
	//y = 2 * fabs(5 - x) - sin(1 / (fabs(2 + x)))* sin(1 / (fabs(2 + x)));
	//y = 2 * fabs(5 - x) - (cos(x) * cos(x) / (1 + fabs(sin(x))));
	cout << "y = " << y << endl;


}


