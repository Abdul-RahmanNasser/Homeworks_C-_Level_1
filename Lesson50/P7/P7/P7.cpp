// Problem #37: Sum Until - 99.
#include <iostream>
using namespace std;
void read(int& num) {
    cout << "Please, enter a number: ";
    cin >> num;
}
int calculate_sum(int& num) {
    int sum = 0;
    while (num != -99) {
        sum += num;
        read(num);
    }
    return sum;
}
using namespace std;
int main()
{
    int num;
    cout << "This program is to read numbers from user and sum them and keep reading until the user enters -99 then print the Sum on screen.\n";
    read(num);
    cout << "The summition of the entered numbers = " << calculate_sum(num) << ".\n";
    return 0;
}