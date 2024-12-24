#include <iostream>
using namespace std;
int main()
{
	//Problem #42
	unsigned int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, TotallSeconds;
	unsigned int SecondsPerDay = 24 * 60 * 60, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
	cout << "Please, enter the number of days: ";
	cin >> NumberOfDays;
	cout << "Please, enter the number of hours: ";
	cin >> NumberOfHours;
	cout << "Please, enter the number of minutes: ";
	cin >> NumberOfMinutes;
	cout << "Please, enter the number of seconds: ";
	cin >> NumberOfSeconds;
	TotallSeconds = NumberOfDays * SecondsPerDay + NumberOfHours * SecondsPerHour + NumberOfMinutes * SecondsPerMinute + NumberOfSeconds;
	cout << "The totall seconds = " << TotallSeconds << " seconds.\n";
	return 0;
}