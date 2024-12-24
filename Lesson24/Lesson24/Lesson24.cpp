#include <iostream>
using namespace std;
int main()
{
	unsigned short a, b;
	cout << "Please, enter the number a: ";
	cin >> a;
	cout << "Please, enter the number b: ";
	cin >> b;
	cout << "Is ( " << a << " == " << b << " )? " << (a == b) << ".\n";
	cout << "Is ( " << a << " != " << b << " )? " << (a != b) << ".\n";
	cout << "Is ( " << a << " >= " << b << " )? " << (a >= b) << ".\n";
	cout << "Is ( " << a << " <= " << b << " )? " << (a <= b) << ".\n";
	cout << "Is ( " << a << " > " << b << " )? " << (a > b) << ".\n";
	cout << "Is ( " << a << " < " << b << " )? " << (a < b) << ".\n";
	return 0;
}