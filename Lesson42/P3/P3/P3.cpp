#include <iostream>
using namespace std;
void read_marks(float& mark1, float& mark2, float& mark3)
{
	cout << "Please, enter your first mark: ";
	cin >> mark1;
	cout << "Please, enter your second mark: ";
	cin >> mark2;
	cout << "Please, enter your third mark: ";
	cin >> mark3;
}
float calculate_average(float& mark1, float& mark2, float& mark3)
{
	return (mark1 + mark2 + mark3) / 3;
}
void check_pass_fail(float& average)
{
	cout << "Your average is " << average << "." << endl;
	if (average >= 50)
	{
		cout << "Pass." << endl;
	}
	else
	{
		cout << "Fail." << endl;
	}
}
int main()
{
	// Problem #11: Average Pass Fail.
	float mark1, mark2, mark3;
	read_marks(mark1, mark2, mark3);
	float average = calculate_average(mark1, mark2, mark3);
	check_pass_fail(average);
	return 0;
}