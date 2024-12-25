#include <iostream>
using namespace std;
void read_grade(int& grade)
{
	cout << "Please, enter the grade: ";
	cin >> grade;
}
void print_grade(int grade)
{
	if (grade >= 90 && grade <= 100)
		cout << "A" << endl;
	else if (grade >= 80 && grade < 90)
		cout << "B" << endl;
	else if (grade >= 70 && grade < 80)
		cout << "C" << endl;
	else if (grade >= 60 && grade < 70)
		cout << "D" << endl;
	else if (grade >= 50 && grade < 60)
		cout << "E" << endl;
	else if (grade >= 0 && grade < 50)
		cout << "F" << endl;
}
int main()
{
	// Problem #33: Grade A, B, C, D, E, F.
	int grade;
	read_grade(grade);
	print_grade(grade);
	return 0;
}