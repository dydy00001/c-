#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of years: ";
	cin >> n;

	int p = 312032486;
	int s = 365 * 24 * 60 * 60; // 1�� = �� ����

	for (int i = 0; i < n; i++)
	{
		p += s / 7.0;   // ���
		p -= s / 13.0;  // ���
		p += s / 45.0;  // �̹�
	}

	cout << "The population in " << n << " years is " << p << endl;

	return 0;
}