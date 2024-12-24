#include <iostream>
using namespace std;
int main()
{
	//Problem #43
	unsigned int TotallSeconds, NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, Remainder;
	unsigned int SecondsPerDay = 24 * 60 * 60, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
	cout << "Please, enter The number of seconeds: ";
	cin >> TotallSeconds;
	NumberOfDays = TotallSeconds / SecondsPerDay;
	Remainder = TotallSeconds % SecondsPerDay;
	NumberOfHours = Remainder / SecondsPerHour;
	Remainder = Remainder % SecondsPerHour;
	NumberOfMinutes = Remainder / SecondsPerMinute;
	Remainder = Remainder % SecondsPerMinute;
	NumberOfSeconds = Remainder;
	cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;
	return 0;
}