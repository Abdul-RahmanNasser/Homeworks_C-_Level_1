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
void read_num(int& num) {
    cout << "Please, enter the number: ";
    cin >> num;
}
string check_month(Months month) {
	switch (month) {
	case Months::January:
		return "January";
		break;
	case Months::February:
		return "February";
		break;
	case Months::March:
		return "March";
		break;
	case Months::April:
		return "April";
		break;
	case Months::May:
		return "May";
		break;
	case Months::June:
		return "June";
		break;
	case Months::July:
		return "July";
		break;
	case Months::August:
		return "August";
		break;
	case Months::September:
		return "September";
		break;
	case Months::October:
		return "October";
		break;
	case Months::November:
		return "November";
		break;
	case Months::December:
		return "December";
		break;
	default:
		return "Invalid month";
	}
}
int main()
{
	int num;
	display_menu();
	read_num(num);
	Months month = static_cast<Months>(num);
	cout << check_month(month) << endl;
	return 0;
}