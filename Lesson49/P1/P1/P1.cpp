#include <iostream>
using namespace std;
void read_second_letters(int j) {
    for (int i = 65; i <= 90; i++)
        cout << char(j) << char(i) << endl;
}
void read_first_letters() {
    for (int i = 65; i <= 90; i++)
        read_second_letters(i);
}
int main()
{
    read_first_letters();
    return 0;
}