#include <iostream>
using namespace std;
int main()
{
	// Problem #8: Pass Fail.
	int mark;
	cout << "Please, enter your mark: ";
	cin >> mark;
	if (mark >= 45) {
		cout << "Pass.";
	}
	else {
		cout << "Fail.";
	}
	return 0;
}