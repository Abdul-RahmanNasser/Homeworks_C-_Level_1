#include <iostream>
using namespace std;
float Number_Of_Seconds(float days, float hours, float minutes, float seconds) {
    float Seconds_Per_Days = 24 * 60 * 60, Seconds_Per_Hours = 60 * 60, Seconds_Per_Minutes = 60;
    return days * Seconds_Per_Days + hours * Seconds_Per_Hours + minutes * Seconds_Per_Minutes + seconds;
}
int main()
{
    // Problem #42: Task Duration In Seconds.
    float Days, Hours, Minutes, Seconds;
    cout << "Please, enter the number of the days: ";
    cin >> Days;
    cout << "Please, enter the number of the hours: ";
    cin >> Hours;
    cout << "Please, enter the number of the minutes: ";
    cin >> Minutes;
    cout << "Please, enter the number of the seconds: ";
    cin >> Seconds;
    cout << "The total number of the seconds = " << Number_Of_Seconds(Days, Hours, Minutes, Seconds) << " seconds.\n";
    return 0;
}