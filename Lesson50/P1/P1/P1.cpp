// Problem #26: Print Numbers from 1 to N.
#include <iostream>
using namespace std;
void read(short& num) {
    cout << "Please, enter a positive number: ";
    cin >> num;
}
void print() {
    short num;
    read(num);
    while (num < 1) {
        cout << "Wrong Number." << endl;
        read(num);
    }
    short i = 1;
    while (i <= num) {
        cout << i << "." << endl;
        i++;
    }
}
int main()
{
    print();
    return 0;
}