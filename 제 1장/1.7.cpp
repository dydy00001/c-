#include <iostream>
using namespace std;

int main()
{
	// 첫 번째 계산
	cout << 4.0 * (1.0 - 1.0 / 3 + 1.0 / 5 - 1.0 / 7 + 1.0 / 9 - 1.0 / 11) << endl;

	// 두 번째 계산 (13까지 확장)
	cout << 4.0 * (1.0 - 1.0 / 3 + 1.0 / 5 - 1.0 / 7 + 1.0 / 9 - 1.0 / 11 + 1.0 / 13) << endl;

	return 0;
}
