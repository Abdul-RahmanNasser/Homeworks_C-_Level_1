#include <iostream>
using namespace std;
void days_hours_minutes_seconds(int seconds) {
    int secs_per_days = 24 * 60 * 60, secs_per_hours = 60 * 60, secs_per_min = 60;
    int remainder;
    float days, hours, min, secs;
    days = seconds / secs_per_days;
    remainder = seconds % secs_per_days;
    hours = remainder / secs_per_hours;
    remainder = remainder % secs_per_hours;
    min = remainder / secs_per_min;
    remainder = remainder % secs_per_min;
    secs = remainder;
    cout << days << ":" << hours << ":" << min << ":" << secs << "." << endl;
}
int main()
{
    // Problem #43: Seconds to Days Hours Minutes Seconds.
    int seconds;
    cout << "Please, enter the number of the seconds: ";
    cin >> seconds;
    days_hours_minutes_seconds(seconds);
    return 0;
}