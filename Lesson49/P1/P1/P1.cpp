#include <iostream>
using namespace std;
void read_second_letters(int j) {
    for (int i = 65; i <= 90; i++)
        cout << char(j) << char(i) << "." << endl;
}
void read_first_letters() {
    for (int i = 65; i <= 90; i++) {
        cout << "****************************************" << endl;
        cout << "Letter: A." << endl;
        read_second_letters(i);
        cout << "****************************************" << endl << endl;
    }
}
int main()
{
    read_first_letters();
    return 0;
}