#include <iostream>
using namespace std;

int main()
{
	double b, r;
	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	cin >> b >> r;

	double i = b * (r / 1200);

	cout << "The intereest is " << i << endl;

	return 0;
}