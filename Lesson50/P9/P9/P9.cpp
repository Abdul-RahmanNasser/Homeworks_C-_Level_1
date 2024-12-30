// Problem #50: ATM PIN 3 Times.
#include <iostream>
using namespace std;
void read(short& PIN) {
    cout << "Please, enter code PIN: ";
    cin >> PIN;
}
void print(short& PIN) {
    short Balance = 7500;
    cout << "Your balance is " << Balance << ".\n";
}
void check(short PIN) {
    if (PIN == 1234)
        print(PIN);
    else {
        short failedcounter = 1;
        while (failedcounter < 3 && PIN != 1234) {
            cout << "Wrong PIN.\n";
            read(PIN);
            failedcounter++;
        }
        if (PIN == 1234)
            print(PIN);
        else
            cout << "Card Locked." << endl;
    }
}
int main()
{
    cout << "This program is to read the ATM PIN code from the user, then checking if PIN Code = 1234, then showing the balance to user, otherwise it prints “Wong PIN” and asks the user to enter the PIN again. Only it is allowed for the user to enter the PIN 3 times, if he fails,the program will print “Card is locked!”\n";
    short PIN;
    read(PIN);
    check(PIN);
    return 0;
}