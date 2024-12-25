// Problem #36: Simple Calculator.
#include <iostream>
using namespace std;
void read_numbers(int& num1, int& num2) {
    cout << "Please, enter your first number: ";
    cin >> num1;
	cout << "Please, enter your second number: ";
	cin >> num2;
}
char read_operation() {
	char operation;
	cout << "Please, enter your operation: ";
	cin >> operation;
	return operation;
}
void calculate(int num1, int num2, char operation) {
	if (operation == '+') {
		cout << "The result is: " << num1 + num2 << endl;
	}
	else if (operation == '-') {
		cout << "The result is: " << num1 - num2 << endl;
	}
	else if (operation == '*') {
		cout << "The result is: " << num1 * num2 << endl;
	}
	else if (operation == '/') {
		cout << "The result is: " << num1 / num2 << endl;
	}
	else {
		cout << "Invalid operation!" << endl;
	}
}
int main()
{
	int num1, num2;
	char operation;
	read_numbers(num1, num2);
	operation = read_operation();
	calculate(num1, num2, operation);
	return 0;
}