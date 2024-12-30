// Problem #32: Power of M.
#include <iostream>
using namespace std;
void read_num(int& num) {
    cout << "Please, enter a positive integer number or 0: ";
    cin >> num;
}
void read_pow(int& power) {
    cout << "Please, enter a positive integer power or 0: ";
    cin >> power;
}
void check(int& num, int& power) {
    while (num < 0) {
        cout << "Wrong Number.\n";
        read_num(num);
    }
    while (power < 0) {
        cout << "Wrong Power.\n";
        read_pow(power);
    }
    while (num == 0 && power == 0) {
        cout << "The number and power must not both equal 0 at the same time.\n";
        read_num(num);
        read_pow(power);
    }
}
void calculate_result(int& num, int& power, int& result) {
    result = 1;
    while (power >= 1) {
        result *= num;
        power--;
    }
}
void print_result(int num, int power, int result) {
    cout << num << "^" << power << " = " << result << ".\n";
}
int main()
{
    int num, number, power, result;
    read_num(num);
    read_pow(power);
    check(num, power);
    number = power;
    calculate_result(num, power, result);
    print_result(num, number, result);
    return 0;
}