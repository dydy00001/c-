#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double savingAmount;
	cout << "Enter the monthly saving amount: ";
	cin >> savingAmount;

	double monthRate = 0.05 / 12.0;
	double accountValue = 0;

	for (int i = 0; i < 6; i++)
	{
		accountValue += savingAmount;
		accountValue *= (1 + monthRate);
	}
	cout << fixed << setprecision(2);
	cout << "After the sixth month, the account value is " << accountValue << endl;

	return 0;
}