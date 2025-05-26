#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an amount in double , for example 1156: ";
	int amount;
	cin >> amount;
	int remainingAmount = amount;

	int numberOfOneDallars = remainingAmount / 100;
	remainingAmount %= 100;

	cout << "Your amount" << amount << " consists of " << endl <<
		" " << numberOfOneDallars << " dollars" << endl <<
		" " << remainingAmount << " cents" << endl;


	return 0;
}