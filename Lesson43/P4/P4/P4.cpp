// Problem #44: Day Of Week.
#include <iostream>
#include <string>
using namespace std;
enum Days { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
void display_menu() {
	cout << "*************************************************************************************" << endl;
	cout << "This program will display the day of the week based on the number you enter." << endl;
	cout << "1. Sunday" << endl;
	cout << "2. Monday" << endl;
	cout << "3. Tuesday" << endl;
	cout << "4. Wednesday" << endl;
	cout << "5. Thursday" << endl;
	cout << "6. Friday" << endl;
	cout << "7. Saturday" << endl;
	cout << "*************************************************************************************" << endl;
}
void read_num(int& num) {
	cout << "Please, enter the number: ";
	cin >> num;
}
string check_day(Days day) {
	switch (day)
	{
	case Days::Sunday:
		return "Sunday";
		break;
	case Days::Monday:
		return "Monday";
		break;
	case Days::Tuesday:
		return "Tuesday";
		break;
	case Days::Wednesday:
		return "Wednesday";
		break;
	case Days::Thursday:
		return "Thursday";
		break;
	case Days::Friday:
		return "Friday";
		break;
	case Days::Saturday:
		return "Saturday";
		break;
	default:
		return "Invalid input";
	}
}
int main()
{
	int num;
	read_num(num);
	Days day = static_cast<Days>(num);
	cout << check_day(day) << endl;
	return 0;
}