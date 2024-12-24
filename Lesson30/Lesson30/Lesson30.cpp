#include <iostream>
#include <string>
using namespace std;
int main()
{
	string st1 = "43.22";
	double st1_double = stod(st1);
	float st1_float = stof(st1);
	int st1_int = stoi(st1);
	cout << "The number converting from string to double is " << st1_double << ".\n";
	cout << "The number converting from string to float is " << st1_float << ".\n";
	cout << "The number converting from string to integer is " << st1_int << ".\n";
	cout << "***************************************************************************" << endl;
	int N1 = 20;
	string N1_string = to_string(N1);
	cout << "The number converting from integer to string is " << N1_string << ".\n";
	cout << "***************************************************************************" << endl;
	double N2 = 33.5;
	string N2_string = to_string(N2);
	cout << "The number converting from double to string is " << N2_string << ".\n";
	cout << "***************************************************************************" << endl;
	float N3 = 55.23;
	string N3_string = to_string(N3);
	cout << "The number converting from float to string is " << N3_string << ".\n";
	int N3_integer;
	N3_integer = N3;
	//N3_integer = int(N3);
	//N3_integer = (int)N3;
	cout << "The number converting from float to integer is " << N3_integer << ".\n";
	return 0;
}