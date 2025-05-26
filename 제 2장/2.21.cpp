#include <iostream>
using namespace std;

int main()
{
	double d, m_g, p_g;
	cout << "Enter the driving distance: ";
	cin >> d;
	cout << "Enter miles per gallon: ";
	cin >> m_g;
	cout << "Enter price per gallon: ";
	cin >> p_g;
	cout << "The cost of driving is $" << d * p_g / m_g << endl;

	return 0;
}