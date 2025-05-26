#include <iostream>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3;
	double s1, s2, s3;
	cout << "Enter three points for a triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	s1 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	s2 = pow(pow(x3 - x2, 2) + pow(y3 - y2, 2), 0.5);
	s3 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);

	double s = (s1 + s2 + s3) / 2.0;
	double a = pow(s * (s - s1) * (s - s2) * (s - s3), 0.5);

	cout << "The area of the triangle is " << a << endl;

	return 0;

}