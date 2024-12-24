#include <iostream>
using namespace std;
int main()
{
    short int x, y, z;
    cout << "Please, enter your first number: ";
    cin >> x;
    cout << "Please, enter your second number: ";
    cin >> y;
    cout << "Please, enter your third number: ";
    cin >> z;
    short int total = x + y + z;
    cout << x << " +" << endl;
    cout << y << " +" << endl;
    cout << z << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Total = " << total << ".";
    return 0;
}