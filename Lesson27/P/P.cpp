#include <iostream>
using namespace std;
struct accounts {
	string facebook, linkedin, twitter, instagram, youtube;
};
struct phones {
	string phone1, phone2;
};
struct emails {
	string email1, email2, email3;
};
struct contact_information {
	emails email;
	phones phone;
	accounts account;
};
struct user {
	string name, city, country;
	short age;
	float monthly_salary, yearly_salary = monthly_salary * 12;
	char gender;
	bool ismarried;
	contact_information contact;
};
int main()
{
	user user1;
	cout << "Please, enter your name: ";
	cin >> user1.name;
	cout << "Please, enter your age: ";
	cin >> user1.age;
	cout << "Please, enter your city: ";
	cin >> user1.city;
	cout << "Please, enter your country: ";
	cin >> user1.country;
	cout << "Please, enter your monthly salary: ";
	cin >> user1.monthly_salary;
	cout << "Please, enter your gender: ";
	cin >> user1.gender;
	cout << "Please, are you married ( 0 / 1 ) ?\n";
	cin >> user1.ismarried;
	cout << "Please, enter your first email: ";
	cin >> user1.contact.email.email1;
	cout << "Please, enter your second email: ";
	cin >> user1.contact.email.email2;
	cout << "Please, enter your third email: ";
	cin >> user1.contact.email.email3;
	cout << "Please, enter your first phone number: ";
	cin >> user1.contact.phone.phone1;
	cout << "Please, enter your second phone number: ";
	cin >> user1.contact.phone.phone2;
	cout << "Please, enter your Facebook: ";
	cin >> user1.contact.account.facebook;
	cout << "Please, enter your LinkedIn: ";
	cin >> user1.contact.account.linkedin;
	cout << "Please, enter your Twitter: ";
	cin >> user1.contact.account.twitter;
	cout << "Please, enter your Instagram: ";
	cin >> user1.contact.account.instagram;
	cout << "Please, enter your YouTube: ";
	cin >> user1.contact.account.youtube;
	cout << "*****************************************************************************************";
	cout << "Name: " << user1.name << ".\n";
	cout << "Age: " << user1.age << " years old.\n";
	cout << "City: " << user1.city << ".\n";
	cout << "Country: " << user1.country << ".\n";
	cout << "Monthly Salary: " << user1.monthly_salary << ".\n";
	cout << "Yearly Salary: " << user1.yearly_salary << ".\n";
	cout << "Gender: " << user1.gender << ".\n";
	cout << "Married: " << user1.ismarried << ".\n";
	cout << "Contact Information:\n";
	cout << "	Email 1: " << user1.contact.email.email1 << ".\n";
	cout << "	Email 2: " << user1.contact.email.email2 << ".\n";
	cout << "	Email 3: " << user1.contact.email.email3 << ".\n";
	cout << "	Phone 1: " << user1.contact.phone.phone1 << ".\n";
	cout << "	Phone 2: " << user1.contact.phone.phone2 << ".\n";
	cout << "	Facebook: " << user1.contact.account.facebook << ".\n";
	cout << "	LinkedIn: " << user1.contact.account.linkedin << ".\n";
	cout << "	Twitter: " << user1.contact.account.twitter << ".\n";
	cout << "	Instagram: " << user1.contact.account.instagram << ".\n";
	cout << "	YouTube: " << user1.contact.account.youtube << ".\n";
	cout << "*****************************************************************************************";
	return 0;
}