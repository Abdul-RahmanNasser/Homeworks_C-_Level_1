#include <iostream>
using namespace std;
void Swap(int num1, int num2) {
    int num3;
    cout << "Your first number is " << num1 << ", your second number is " << num2 << "." << endl;
    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout << "Your first number is " << num1 << ", your second number is " << num2 << "." << endl;

}
int main()
{
    // Problem #14: Swap numbers
    int num1, num2;
    cout << "Please, enter your first number: ";
    cin >> num1;
    cout << "Please, enter your second number: ";
    cin >> num2;
    Swap(num1, num2);
    return 0;
}