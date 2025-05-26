#include <iostream>
using namespace std;

int main()
{
	int num;
	while (true)
	{
		cout << "Enter a number between 0 and 1000: ";
		cin >> num;
		if (num >= 0 && num <= 1000)
			break;
	}

	int sum = 0;

	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}

	cout << "The sum of the digits is " << sum << endl;

	return 0;
}