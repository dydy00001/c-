#include <iostream>
using namespace std;

int main()
{
	double celsius;
	cout << "Enter a degree in Celsius: ";
	cin >> celsius;
	double farenheit = (9.0 / 5) * celsius + 32;
	cout << celsius << " Celsius is " << farenheit << " Farenheit" << endl;
	
	return 0;
}