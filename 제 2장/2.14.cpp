#include <iostream>
using namespace std;

int main()
{
	double pound, inch;
	cout << "Enter weight in pounds: ";
	cin >> pound;
	cout << "Enter height in inches: ";
	cin >> inch;

	double kg = pound * 0.45359237;
	double m = inch * 0.0254;

	double BMI = kg / (m * m);

	cout << "BMI is " << BMI << endl;

	return 0;
}