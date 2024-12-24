#include <iostream>
using namespace std;
int main()
{
    short A, B;
    cout << "Please, enter the first number:\n";
    cin >> A;
    cout << "Please, enter the second number:\n";
    cin >> B;
    cout << A << " + " << B << " = " << A + B << ".\n";
    cout << A << " - " << B << " = " << A - B << ".\n";
    cout << A << " * " << B << " = " << A * B << ".\n";
    cout << A << " / " << B << " = " << A / B << ".\n";
    cout << A << " % " << B << " = " << A % B << ".\n";
    return 0;
}