#include <iostream>
using namespace std;
int read_number() {
    int num;
    cout << "Please, enter number of the numbers you want: ";
    cin >> num;
    return num;
}
void print_rows(int& num) {
    for (int i = 1; i <= num; i++)
        cout << i << " ";
}
void print_colomns(int num) {
    if (num >= 1 && num == int(num))
        for (int i = 1; i <= num; i++) {
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