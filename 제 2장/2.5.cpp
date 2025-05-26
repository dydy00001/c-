#include <iostream>
using namespace std;

int main()
{
	double subtotal, rate;
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> rate;

	double gratuity = subtotal * rate / 100;
	double total = subtotal + gratuity;

	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl;

	return 0;
}