// Problem #30: Factorial of N!
#include <iostream>
using namespace std;
void read(short& num) {
    cout << "Please, enter a positive number or 0: ";
    cin >> num;
}
void check(short& num) {
    while (num < 0) {
        cout << "Wrong Number.\n";
        read(num);
    }
}
void calculate_factorial(int& factorial, short& num) {
    while (num > 0) {
        factorial *= num;
        num--;
    }
}
void print(int factorial, short num) {
    cout << num << "! = " << factorial << "." << endl;
}
int main()
{
    short num, number;
    int factorial = 1;
    read(num);
    check(num);
    number = num;
    calculate_factorial(factorial, num);
    print(factorial, number);
    return 0;
}