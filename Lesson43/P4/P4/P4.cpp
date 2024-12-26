// Problem #44: Day Of Week.
#include <iostream>
#include <string>
using namespace std;
enum Days { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
void display_menu() {
	cout << "*************************************************************************************" << endl;
	cout << "Please, enter the number of the day you want from this menu: " << endl;
	cout << "1. Sunday" << endl;
	cout << "2. Monday" << endl;
	cout << "3. Tuesday" << endl;
	cout << "4. Wednesday" << endl;
	cout << "5. Thursday" << endl;
	cout << "6. Friday" << endl;
	cout << "7. Saturday" << endl;
	cout << "*************************************************************************************" << endl;
}
Days read_num(int& num) {
	cout << "Please, enter the number: ";
	cin >> num;
	return static_cast<Days>(num);
}
string check_day(Days day) {
	switch (day)
	{
	case Days::Sunday:
		return "Sunday";
	case Days::Monday:
		return "Monday";
	case Days::Tuesday:
		return "Tuesday";
	case Days::Wednesday:
		return "Wednesday";
	case Days::Thursday:
		return "Thursday";
	case Days::Friday:
		return "Friday";
	case Days::Saturday:
		return "Saturday";
	default:
		return "Invalid input";
	}
}
int main()
{
	int num;
	display_menu();
	cout << check_day(read_num(num)) << "." << endl;
	return 0;
}