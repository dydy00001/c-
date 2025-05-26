#include <iostream>
using namespace std;

int main()
{
	int p = 312032486;
	int s = 365 * 24 * 60 * 60;
	for (int i = 0; i < 5; i++)
	{
		p += s / 7.0;
		p -= s / 13.0;
		p += s / 45.0;
	}

	cout << p << endl;

	return 0;
}
