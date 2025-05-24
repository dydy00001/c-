#include <iostream>
using namespace std;

int main()
{
	double km = 24 * 1.6;
	double v = km / ((40 + (35 / 60.0)) / 60);

	cout << v << endl;

	return 0;
}