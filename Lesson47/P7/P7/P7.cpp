// Problem #46: Print Letters from A to Z.
#include <iostream>
using namespace std;
void print_capital_letters() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << "." << endl;
    }
}
void print_small_letters() {
    for (int i = 97; i <= 122; i++) {
        cout << char(i) << "." << endl;
    }
}
int main()
{
    print_capital_letters();
    print_small_letters();
	return 0;
}