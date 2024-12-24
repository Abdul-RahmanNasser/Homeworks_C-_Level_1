#include <iostream>
#include<string>
using namespace std;
int main()
{
	string string1, string2, string3;
	cout << "Please, enter string 1: ";
	getline(cin, string1);
	cout << "Please, enter string 2: ";
	cin >> string2;
	cout << "Please, enter string 3: ";
	cin >> string3;
	cout << "*********************************************************" << endl;
	cout << "The length of string 1 is " << string1.length() << ".\n";
	cout << "Characters at 0, 2, 4 and 7 is: " << string1[0];
	cout<< " " << string1[2] << " " << string1[4] << " " << string1[7] << ".\n";
	cout << "Concatenating string 2 and string 3 = " << string2 + string3 << ".\n";
	cout << string2 << "*" << string3 << " = " << stoi(string2) * stoi(string3) << ".\n";
	return 0;
}