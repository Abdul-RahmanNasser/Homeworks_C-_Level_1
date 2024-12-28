#include <iostream>
using namespace std;
int read_number() {
    char c;
    cout << "Please, enter character you want: ";
    cin >> c;
    return int(c);
}
void print_rows(int& num) {
    for (int i = 65; i <= num; i++)
        cout << char(i) << " ";
}
void print_colomns(int num) {
    if (num >= 65 && num <= 90)
        for (int i = 65; i <= num; i++) {
            print_rows(i);
            cout << endl;
        }
    else
        cout << "Invalid Input!";
}
int main()
{
    print_colomns(read_number());
    return 0;
}