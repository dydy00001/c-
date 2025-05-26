#include <iostream>
using namespace std;

int main()
{
	double a, r, y;
	cout << "Enter investment amount: ";
	cin >> a;
	cout << "Enter annual interest rate in percentage: ";
	cin >> r;
	cout << "Enter number of years: ";
	cin >> y;

	double f = a * pow((1 + r / 1200), y * 12);

	cout << "Accumulated value is $" << f << endl;

	return 0;
}