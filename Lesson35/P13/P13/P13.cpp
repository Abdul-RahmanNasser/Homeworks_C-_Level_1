#include <iostream>
#include<cmath>
using namespace std;
float power(float num, float POW) {
    return pow(num, POW);
}
int main()
{
    // Problem #32: Power of M.
    float num, POW;
    cout << "Please, enter your number: ";
    cin >> num;
    cout << "Please, enter your power: ";
    cin >> POW;
    cout << "(" << num << ")^(" << POW << ") = " << power(num, POW) << "." << endl;
    return 0;
}