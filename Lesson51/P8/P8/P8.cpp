// Problem #46: Print Letters from A to Z.
#include <iostream>
using namespace std;
void print() {
    int i = 65;
    while (i <= 90) {
        cout << char(i) << ".\n";
        i++;
    }
}
int main()
{
    cout << "This program is to print all letters from A to Z.\n";
    print();
    return 0;
}