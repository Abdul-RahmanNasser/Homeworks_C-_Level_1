#include <iostream>
using namespace std;
void read_mark(int& mark) {
	cout << "Please, enter the mark: ";
	cin >> mark;
}
void print_result(int& mark) {
	if (mark >= 45) {
		cout << "Pass." << endl;
	}
	else
	{
		cout << "Fail." << endl;
	}
}
int main()
{
	// Problem #8: Pass Fail.
	int mark;
	read_mark(mark);
	print_result(mark);
	return 0;
}