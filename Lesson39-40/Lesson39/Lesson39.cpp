#include <iostream>
#include<string>
using namespace std;
void ReadGrade(float grade[3]) {
	cout << "Please, enter you grade 1: ";
	cin >> grade[0];
	cout << "Please, enter you grade 2: ";
	cin >> grade[1];
	cout << "Please, enter you grade 3: ";
	cin >> grade[2];
}
void PrintAvg(float grade[3]) {
	float avg;
	avg = (grade[0] + grade[1] + grade[2]) / 3;
	cout << "Your average grade is: " << avg << "." << endl;
}
int main()
{
	float grade[3];
	ReadGrade(grade);
	PrintAvg(grade);
	return 0;
}