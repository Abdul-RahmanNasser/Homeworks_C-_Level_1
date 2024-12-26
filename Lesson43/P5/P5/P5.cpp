// Problem #45: Month Of Year.
#include <iostream>
#include <string>
using namespace std;
enum Months { January=1, February, March, April, May, June, July, August, September, October, November, December };
void display_menu() {
	cout << "*************************************************************************************" << endl;
	cout << "Please, enter the number of the month you want from this menu: " << endl;
	cout << "1. January" << endl;
	cout << "2. February" << endl;
	cout << "3. March" << endl;
	cout << "4. April" << endl;
	cout << "5. May" << endl;
	cout << "6. June" << endl;
	cout << "7. July" << endl;
	cout << "8. August" << endl;
	cout << "9. September" << endl;
	cout << "10. October" << endl;
	cout << "11. November" << endl;
	cout << "12. December" << endl;
	cout << "*************************************************************************************" << endl;
}
Months read_num(int& num) {
    cout << "Please, enter the number: ";
    cin >> num;
	return static_cast<Months>(num);
}
string check_month(Months month) {
	switch (month) {
	case Months::January:
		return "January";
	case Months::February:
		return "February";
	case Months::March:
		return "March";
	case Months::April:
		return "April";
	case Months::May:
		return "May";
	case Months::June:
		return "June";
	case Months::July:
		return "July";
	case Months::August:
		return "August";
	case Months::September:
		return "September";
	case Months::October:
		return "October";
	case Months::November:
		return "November";
	case Months::December:
		return "December";
	default:
		return "Invalid month";
	}
}
int main()
{
	int num;
	display_menu();
	cout << check_month(read_num(num)) << "." << endl;
	return 0;
}