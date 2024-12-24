#include <iostream>
#include <string>
using namespace std;
struct personalinfo {
	string first_name, last_name;
	int age, phone;
};
void read_info(personalinfo &info) {
	cout << "Please, enter first name: ";
	cin >> info.first_name;
	cout << "Please, enter last name: ";
	cin >> info.last_name;
	cout << "Please, enter age: ";
	cin >> info.age;
	cout << "Please, enter phone number: ";
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
void read_personal_info(personalinfo info[2]) {
	read_info(info[0]);
	read_info(info[1]);
}
void print_personal_info(personalinfo info[2]) {
	print_info(info[0]);
	print_info(info[1]);
}
int main()
{
	personalinfo persons[2];
	read_personal_info(persons);
	print_personal_info(persons);
	return 0;
}