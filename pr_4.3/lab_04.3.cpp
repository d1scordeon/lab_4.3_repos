// Lab_04_3.cpp
// Бахмат Катерина
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 1


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, a, b, c, F;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		
		if (x < 0 && b != 0)
			F = a * x * x + b;
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
				F = x / c;

	

		cout << "|" << setw(7) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(2) << F
			<< " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
