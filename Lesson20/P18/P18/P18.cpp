#include <iostream>
using namespace std;
int main()
{
	//Problem #47
	float LoanAmount, MonthlyPayment, NumberOfMonths;
	cout << "Please, enter the loan amount: ";
	cin >> LoanAmount;
	cout << "Please, enter the monthly payment: ";
	cin >> MonthlyPayment;
	NumberOfMonths = LoanAmount / MonthlyPayment;
	cout << "The number of months = " << NumberOfMonths << " months.\n";
	return 0;
}