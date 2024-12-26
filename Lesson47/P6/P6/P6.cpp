// Problem #32: Power of M.
#include <iostream>
using namespace std;
int read_num() {
    int num;
    cout << "Please, enter a num: ";
    cin >> num;
    return num;
}
int read_pow() {
    int power;
    cout << "Please, enter a power: ";
    cin >> power;
    return power;
}
void print_result(int num, int power) {
    int result = 1;
    for (int i = 1; i <= power; i++) {
        result *= num;
    }
    cout << num << "^" << power << " = " << result << "." << endl;
}
int main()
{
    print_result(read_num(), read_pow());
    return 0;
}