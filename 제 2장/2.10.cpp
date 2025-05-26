#include <iostream>
#include <iomanip>;
using namespace std;

int main()
{
	double M, T1, T2;
	cout << "Enter the amount of water in kilograms: ";
	cin >> M;
	cout << "Enter the initial temperature: ";
	cin >> T1;
	cout << "Enter the final temperature: ";
	cin >> T2;

	double Q = M * (T2 - T1) * 4184;
	cout << fixed << setprecision(1);
	cout << "The energy needed is " << Q << endl;

	return 0;
}