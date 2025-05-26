#include <iostream>
using namespace std;

int main()
{
	int min;
	cout << "Enter the number of minutes";
	cin >> min;

	int day = min / 60 / 24;
	int year = day / 365;
	day %= 365;

	cout << min << " minutes is approximately " << year << " years and " << day << " days" << endl;

	return 0;
}
