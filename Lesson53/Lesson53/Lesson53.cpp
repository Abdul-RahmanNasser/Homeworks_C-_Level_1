#include <iostream>
using namespace std;
void sum() {
    int sum = 0, num;
    for (int i = 1; i <= 5; i++) {
        cout << "Please, enter a number: ";
        cin >> num;
        if (num > 50) {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            continue;
        }
        sum += num;
    }
    cout << "The summition of the entered numbers is: " << sum << ".\n";
}
int main()
{
    sum();
    return 0;
}