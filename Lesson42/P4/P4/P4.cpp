#include <iostream>
using namespace std;
int main()
{
    // Problem #24: Validate Age Between 18 and 45.
	int age;
	cout << "Please, enter your age: ";
	cin >> age;
	if (age >= 18 && age <= 45)
	{
		cout << "Valid age." << endl;
	}
	else
	{
		cout << "Invalid age." << endl;
	}
	return 0;
}