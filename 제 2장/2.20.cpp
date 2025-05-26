#include <iostream>
using namespace std;

int main()
{
	double x1, x2, y1, y2;
	cout << "Enter the coordinates for two points: ";
	cin >> x1 >> y1 >> x2 >> y2;

	cout << "The slope for the line that conects two points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << (y2 - y1) / (x2 - x1) << endl;

	return 0;
}