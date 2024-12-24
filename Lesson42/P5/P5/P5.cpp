#include <iostream>
using namespace std;
int main()
{
    // Problem #49: ATM PIN.
	int PIN, Balance = 7500;
	cout << "Please, enter the PIN: ";
	cin >> PIN;
	if (PIN == 1234)
	{
		cout << "Welcome to the ATM!" << endl;
		cout << "Your current balance is: " << Balance << " EGP." << endl;
	}
	else
	{
		cout << "Invalid PIN!" << endl;
	}
	return 0;
}