#include <iostream>
using namespace std;
int main()
{
	//Problem #48
	float LoanAmount, NumberOfMonths, MonthlyPayment;
	cout << "Please, enter the loan amount: ";
	cin >> LoanAmount;
	cout << "Please, enter the number of months: ";
	cin >> NumberOfMonths;
	MonthlyPayment = LoanAmount / NumberOfMonths;
	cout << "The monthly payment = " << MonthlyPayment << ".\n";
	return 0;
}