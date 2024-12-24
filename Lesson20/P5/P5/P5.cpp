#include <iostream>
using namespace std;
int main()
{
    //Problem #14
    short num1, num2, swap;
    cout << "Please, enter your first number: ";
    cin >> num1;
    cout << "Please, enter your second number: ";
    cin >> num2;
    cout << "Your first number = " << num1 << ", and your second number = " << num2 << ".\n";
    swap = num1;
    num1 = num2;
    num2 = swap;
    cout << "Your first number = " << num1 << ", and your second number = " << num2 << ".\n";
    return 0;
}