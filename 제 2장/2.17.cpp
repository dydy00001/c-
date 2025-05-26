#include <iostream>
using namespace std;

int main()
{
	double t, v;
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> t;
	cout << "Enter the wind speed in miles per hour: ";
	cin >> v;

	double t_wc = 35.74 + 0.6215 * t - 35.75 * pow(v, 0.16) + 0.4275 * t * pow(v, 0.16);

	cout << "The wind chill index is " << t_wc << endl;

	return 0;
}