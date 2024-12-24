#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #32: After finding the result use round and print the final results.
	double num, power, result;
	cout << "Please, enter your number: ";
	cin >> num;
	cout << "Please, enter its power you want: ";
	cin >> power;
	result = pow(num, power);
	cout << "(" << num << ")^(" << power << ") = " << result << "." << endl;
	cout << "The final result of (" << num << ")^(" << power << ") = " << round(result) << "." << endl;
	return 0;
}