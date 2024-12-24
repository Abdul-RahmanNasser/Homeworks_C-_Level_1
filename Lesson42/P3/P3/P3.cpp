#include <iostream>
using namespace std;
int main()
{
	// Problem #11: Average Pass Fail.
	float marks[3];
	float average;
	cout << "Please, enter your first mark: ";
	cin >> marks[0];
	cout << "Please, enter your second mark: ";
	cin >> marks[1];
	cout << "Please, enter your third mark: ";
	cin >> marks[2];
	average = (marks[0] + marks[1] + marks[2]) / 3;
	cout << "Your average is " << average << "." << endl;
	if (average >= 50)
	{
		cout << "Pass." << endl;
	}
	else
	{
		cout << "Fail." << endl;
	}
	return 0;
}