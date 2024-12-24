#include <iostream>
using namespace std;
void read_hire_Driver(int& age, bool& ishasdrivinglicense)
{
	cout << "Please, enter your age: ";
	cin >> age;
	cout << "Please, do you have a driving license (1/0)? " << endl;
	cin >> ishasdrivinglicense;
}
void pring_hire_Driver(int& age, bool& ishasdrivinglicense)
{
	if (age >= 21 && ishasdrivinglicense == true)
	{
		cout << "Hired." << endl;
	}
	else
	{
		cout << "Rejected." << endl;
	}
}
int main()
{
	// Problem #04: Hire a driver Case 1.
	int age;
	bool ishasdrivinglicense;
	read_hire_Driver(age, ishasdrivinglicense);
	pring_hire_Driver(age, ishasdrivinglicense);
	return 0;
}