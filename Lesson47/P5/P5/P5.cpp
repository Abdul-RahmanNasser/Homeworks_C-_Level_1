// Problem #30: Factorial of N!.
using namespace std;
#include <iostream>
int read_num() {
    int num;
    cout << "Please, enter a number: ";
    cin >> num;
    return num;
}
void print_factorial(int num) {
    int factorial = 1;
    for (int i = 2; i <= num; i++) {
        factorial *= i;
    }
    cout << "The factorial of " << num << " is: " << factorial << "." << endl;
}
int main()
{
    print_factorial(read_num());
    return 0;
}