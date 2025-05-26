#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << left << setprecision(0);
	cout << setw(7)  << "a" << setw(7) <<"b" << setw(7)<<"pow(a,b)" << endl;
	for (int i = 1; i < 6; i++)
		cout << setw(7) << i << setw(7) << i+1 << setw(7) << pow(i,i+1) << endl;
	
	return 0;
}