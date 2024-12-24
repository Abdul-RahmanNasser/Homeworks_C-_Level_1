#include <iostream>
using namespace std;
int main()
{
    //Problem #31
    float num, a, b, c;
    cout << "Please, enter your number: ";
    cin >> num;
    a = num * num;
    cout << num << "^" << "2 = " << a << ".\n";
    b = num * num * num;
    cout << num << "^" << "3 = " << b << ".\n";
    c = num * num * num * num;
    cout << num << "^" << "4 = " << c << ".\n";
    return 0;
}