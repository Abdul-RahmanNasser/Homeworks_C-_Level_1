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
enoperation choose() {
	int operation;
	cout << "Please, enter your operation: ";
	cin >> operation;
	return static_cast<enoperation>(operation);
}
string print_result(int num1, int num2, enoperation operation) {
	int result;
	switch (operation) {
	case enoperation::ADDITION:
		result = num1 + num2;
		return "The result is: " + to_string(result);
	case enoperation::SUBTRACTION:
		result = num1 - num2;
		return "The result is: " + to_string(result);
	case enoperation::MULTIPLICATION:
		result = num1 * num2;
		return "The result is: " + to_string(result);
	case enoperation::DIVISION:
		if (num2 == 0)
			return "Division by zero is not allowed!";
		else {
			result = num1 / num2;
			return "The result is: " + to_string(result);
		}
	default:
		return "Invalid operation!";
	}
}
int main()
{
	int num1, num2;
	display_menu();
	read_nums(num1, num2);
	cout<< print_result(num1, num2, choose()) << endl;
	return 0;
}