#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int gmtoffset;
	cout << "Enter the time zone offset to GMT: ";
	cin >> gmtoffset;

	int totalSeconds = time(0);
	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24 + gmtoffset;

	if (currentHour< 0)
	{
		currentHour += 24;
	}

	cout << "Current time is " << currentHour << ":" << currentMinute << ":" << currentSecond << endl;

	return 0;
}