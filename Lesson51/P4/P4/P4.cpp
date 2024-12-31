// Problem #28: Sum Even Numbers from 1 to N.
#include <iostream>
using namespace std;
void read(short& num) {
    cout << "Please, enter a positive number: ";
    cin >> num;
}
void check(short& num) {
    while (num <= 0) {
        cout << "Wrong Number." << endl;
        read(num);
    }
}
void calculate_sum(short num, short& sum) {
    while (num > 0) {
        if (num % 2 == 0)
            sum += num;
        num--;
    }
}
void print(short& sum) {
    cout << "The summition of the even numbers from the entered number to 0 = " << sum << "." << endl;
}
int main()
{
    short num, sum = 0;
    read(num);
    check(num);
    calculate_sum(num, sum);
    print(sum);
    return 0;
}