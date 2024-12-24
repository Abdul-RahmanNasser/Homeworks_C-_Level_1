#include <iostream>
using namespace std;
int main()
{
	//Problem #40
	float BillValue, TotallBill;
	cout << "Please, enter the bill value: ";
	cin >> BillValue;
	TotallBill = BillValue * 1.1;
	TotallBill = TotallBill * 1.16;
	cout << "The totall bill = " << TotallBill << ".\n";
	return 0;
}