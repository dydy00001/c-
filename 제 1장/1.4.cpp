#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << left;
	cout <<setw(5)<< "a" << setw(5) << "a^2" << setw(5) << "a^3" << endl;
	for(int i=1;i<5;i++)
		cout<<setw(5)<<i << setw(5) <<pow(i,2)<< setw(5) << pow(i,3) << endl;

	return 0;
}