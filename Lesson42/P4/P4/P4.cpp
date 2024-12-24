#include <iostream>
using namespace std;
void read_age(int& age)
{
	cout << "Please, enter your age: ";
	cin >> age;
}
void print_result(int age)
{
	if (age >= 18 && age <= 45)
	{
		cout << "Valid age." << endl;
	}
	else
	{
		cout << "Invalid age." << endl;
	}
}
int main()
{
    // Problem #24: Validate Age Between 18 and 45.
	int age;
	read_age(age);
	print_result(age);
	return 0;
}