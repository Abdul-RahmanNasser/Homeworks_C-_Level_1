// Problem #36: Simple Calculator.
#include <iostream>
#include <string>
using namespace std;
enum enoperation { ADDITION = 1, SUBTRACTION = 2, MULTIPLICATION = 3, DIVISION = 4 };
void display_menu() {
	cout << "************************************************************************" << endl;
	cout << "Please, choose the number of your operation you want to perform: ";
	cout << "1. Addition." << endl;
	cout << "2. Subtraction." << endl;
	cout << "3. Multiplication." << endl;
	cout << "4. Division." << endl;
	cout << "************************************************************************" << endl;
}
void read_nums(int& num1, int& num2) {
	cout << "Please, enter your first number: ";
	cin >> num1;
	cout << "Please, enter your second number: ";
	cin >> num2;
}
void choose(int& operation) {
	cout << "Please, enter your operation: ";
	cin >> operation;
}
void print_result(int num1, int num2, enoperation operation) {
	switch (operation) {
	case enoperation::ADDITION:
		cout << "The result is: " << num1 + num2 << endl;
		break;
	case enoperation::SUBTRACTION:
		cout << "The result is: " << num1 - num2 << endl;
		break;
	case enoperation::MULTIPLICATION:
		cout << "The result is: " << num1 * num2 << endl;
		break;
	case enoperation::DIVISION:
		cout << "The result is: " << num1 / num2 << endl;
		break;
	default:
		cout << "Invalid operation!" << endl;
	}
}
int main()
{
	int num1, num2, choice;
	enoperation operation;
	display_menu();
	read_nums(num1, num2);
	choose(choice);
	operation = static_cast<enoperation>(choice);
	print_result(num1, num2, operation);
	return 0;
}