#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #31: After finding the result use round and print the final results.
	float num;
	cout << "Please, enter your number: ";
	cin >> num;
	cout << "(" << num << ")^" << 2 << " = " << pow(num, 2) << "." << endl;
	cout << "(" << num << ")^" << 3 << " = " << pow(num, 3) << "." << endl;
	cout << "(" << num << ")^" << 4 << " = " << pow(num, 4) << "." << endl;
	cout << "The final result of ((" << num << ")^" << 2 << ")" << " = " << round(pow(num, 2)) << "." << endl;
	cout << "The final result of ((" << num << ")^" << 3 << ")" << " = " << round(pow(num, 3)) << "." << endl;
	cout << "The final result of ((" << num << ")^" << 4 << ")" << " = " << round(pow(num, 4)) << "." << endl;
	return 0;
}