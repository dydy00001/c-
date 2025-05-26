#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of years: ";
	cin >> n;

	int p = 312032486;
	int s = 365 * 24 * 60 * 60; // 1≥‚ = √  ¥‹¿ß

	for (int i = 0; i < n; i++)
	{
		p += s / 7.0;   // √‚ª˝
		p -= s / 13.0;  // ªÁ∏¡
		p += s / 45.0;  // ¿ÃπŒ
	}

	cout << "The population in " << n << " years is " << p << endl;

	return 0;
}