#include <iostream>
using namespace std;

int main()
{
	double radius, length;
	cout << "Enter the radius and length of a cylinder: ";
	cin >> radius >> length;
	
	double area = radius * radius * 3.1415;
	double volume = area * length;
	cout << "The area is " << area << endl;
	cout << "The volume is " <<volume<< endl;

	return 0;
}