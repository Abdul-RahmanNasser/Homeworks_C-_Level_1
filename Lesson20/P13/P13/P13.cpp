#include <iostream>
using namespace std;
int main()
{
	//Problem #35
	float Penny, Nickel, Dime, Quarter, Dollar, TotallPennies, TotallDollars;
	cout << "Please, enter the number of Pennies: ";
	cin >> Penny;
	cout << "Please, enter the number of Nickels: ";
	cin >> Nickel;
	cout << "Please, enter the number of Dimes: ";
	cin >> Dime;
	cout << "Please, enter the number of Quarters: ";
	cin >> Quarter;
	cout << "Please, enter the number of Dollars: ";
	cin >> Dollar;
	TotallPennies = Penny + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
	TotallDollars = TotallPennies / 100;
	cout << "The totall of pennies = " << TotallPennies << " pennies.\n";
	cout << "The totall of dollars = " << TotallDollars << " dollars.\n";
	return 0;
}