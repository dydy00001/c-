#include <iostream>
using namespace std;

int main()
{
	double s;
	cout << "Enter the side: ";
	cin >> s;

	double a = pow(27, 0.5) / 2 * pow(s, 2);

	cout << "The area of the hexagon is " << a << endl;

	return 0;
}