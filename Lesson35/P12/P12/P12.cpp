#include <iostream>
#include<cmath>
using namespace std;
void power(float num) {
    cout << "(" << num << ")^" << 2 << " = " << pow(num, 2) << "." << endl;
    cout << "(" << num << ")^" << 3 << " = " << pow(num, 3) << "." << endl;
    cout << "(" << num << ")^" << 4 << " = " << pow(num, 4) << "." << endl;
}
int main()
{
    // Problem #31: Power of 2,3,4.
    float num;
    cout << "Please, enter your number: ";
    cin >> num;
    power(num);
    return 0;
}