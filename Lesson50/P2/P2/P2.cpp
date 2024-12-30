// Problem #27: Print Numbers from N to 1.
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
    short i = num;
    while (i >= 1) {
        cout << i << "." << endl;
        i--;
    }
}
int main()
{
    print();
    return 0;
}