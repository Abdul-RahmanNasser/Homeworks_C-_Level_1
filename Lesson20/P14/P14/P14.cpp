#include <iostream>
using namespace std;
int main()
{
	//Problem #39
	float TotallBill, CashPaid, Remainder;
	cout << "Please, enter the totall bill: ";
	cin >> TotallBill;
	cout << "Please, enter the cash paid: ";
	cin >> CashPaid;
	Remainder = CashPaid - TotallBill;
	cout << "The remainder = " << Remainder << ".\n";
	return 0;
}