#include <iostream>
#include <string>
using namespace std;
struct personalinfo {
	string first_name, last_name;
	int age, phone;
};
void read_info(personalinfo &info) {
	cout << "Please, enter the first name: ";
	cin >> info.first_name;
	cout << "Please, enter the last name: ";
	cin >> info.last_name;
	cout << "Please, enter the age: ";
	cin >> info.age;
	cout << "Please, enter the phone number: ";
	cin >> info.phone;
}
void print_info(personalinfo &info) {
	cout << "***********************************************" << endl;
	cout << "First name: " << info.first_name << "." << endl;
	cout << "Last name: " << info.last_name << "." << endl;
	cout << "Age: " << info.age << " years old." << endl;
	cout << "Phone number: " << info.phone << "." << endl;
	cout << "***********************************************" << endl;
}
void read_personal_info(personalinfo info[100], int& length) {
	cout << "Please, enter the number of the persons you want: ";
	cin >> length;
	if (length <= 100 && length >= 1) {
		for (int i = 1; i <= length; i++) {
			cout << "\nPlease, enter the information for the person number " << i << ":\n";
			cout << "***************************************************" << endl;
			read_info(info[i]);
			cout << "***************************************************" << endl << endl;
		}
	}
	else {
		cout << "Invalid input! the allowed range is the integers [1,100].";
	}
}
void print_personal_info(personalinfo info[100], int length) {
	if (length <= 100 && length >= 1) {
		cout << "The information for the persons is:" << endl << endl;
		for (int i = 1; i <= length; i++) {
			cout << "The information for the person number " << i << " is:" << endl;
			print_info(info[i]);
			cout << endl;
		}
	}
}
int main()
{
	int length;
	personalinfo persons[100];
	read_personal_info(persons, length);
	print_personal_info(persons, length);
	return 0;
}