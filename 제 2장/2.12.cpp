#include <iostream>
using namespace std;

int main()
{
	double v, a;
	cout << "Enter speed and acceleration: ";
	cin >> v >> a;

	double s = (v * v) / (2 * a);

	cout << "The miimum runway length for this airplane is " << s << endl;

	return 0;
}