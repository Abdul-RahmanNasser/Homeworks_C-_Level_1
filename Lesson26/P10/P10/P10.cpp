#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #42: After finding the result use round and print the final results.
	double seconds_per_day = 24 * 60 * 60, seconds_per_hour = 60 * 60, seconds_per_minute = 60, total_seconds;
	double number_of_days, number_of_hours, number_of_minutes, number_of_seconds;
	cout << "Please, enter the number of the days: ";
	cin >> number_of_days;
	cout << "Please, enter the number of the hours: ";
	cin >> number_of_hours;
	cout << "Please, enter the number of the minutes: ";
	cin >> number_of_minutes;
	cout << "Please, enter the number of the seconds: ";
	cin >> number_of_seconds;
	total_seconds = number_of_days * seconds_per_day + number_of_hours * seconds_per_hour + number_of_minutes * seconds_per_minute + number_of_seconds;
	cout << "The total of the seconds = " << total_seconds << " seconds." << endl;
	cout << "the final result of the total = " << round(total_seconds) << " seconds." << endl;
	return 0;
}