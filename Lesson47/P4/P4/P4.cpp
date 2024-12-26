// Problem #29: Sum Even Numbers from 1 to N.
#include <iostream>
using namespace std;
int read_num() {
    int n;
    cout << "Please, enter a number: ";
    cin >> n;
    return n;
}
void print_sum(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "The sum of the even numbers is: " << sum << "." << endl;
}
int main()
{
    print_sum(read_num());
    return 0;
}