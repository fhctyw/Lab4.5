// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 13

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
	double R1, R2;
	double x, y;
	
	srand(time(0));

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (x * x + y * y <= R2 * R2 && x <= 0 && y >= 0 || 
			x * x + y * y >= R2 * R2 && x * x + y * y <= R1 * R1 && x >= 0 && y <= 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		int r = rand();
		x = -R1 + r * (2 * R1) / RAND_MAX;
		y = -R1 + rand() * (2 * R1) / RAND_MAX;

		if (x * x + y * y <= R2 * R2 && x <= 0 && y >= 0 ||
			x * x + y * y >= R2 * R2 && x * x + y * y <= R1 * R1 && x >= 0 && y <= 0)
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}

	return 0;
}