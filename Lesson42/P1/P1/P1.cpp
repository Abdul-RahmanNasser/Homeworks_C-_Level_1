#include <iostream>
using namespace std;
int main()
{
	// Problem #04: Hire a driver Case 1.
	int age;
	bool ishasdrivinglicense;
	cout << "Please, enter your age: ";
	cin >> age;
	cout << "Do you have a driving license? (1 for yes, 0 for no)" << endl;
	cin >> ishasdrivinglicense;
	if (age >= 21 && ishasdrivinglicense == true)
	{
		cout << "Hired.";
	}
	else
	{
		cout << "Rejected.";
	}
	return 0;
}