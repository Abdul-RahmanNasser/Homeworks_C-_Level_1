#include <iostream>
using namespace std;
void read(int& PIN) {
	cout << "Please, enter PIN Code: ";
	cin >> PIN;
}
void check(int PIN) {
	int Balance = 7500;
	if (PIN == 1234) {
		cout << "Welcome to the ATM!" << endl;
		cout << "Your current balance is: " << Balance << " EGP." << endl;
	}
	else {
		cout << "Invalid PIN!" << endl;
	}
}
int main()
{
    // Problem #49: ATM PIN.
	int PIN;
	read(PIN);
	check(PIN);
	return 0;
}