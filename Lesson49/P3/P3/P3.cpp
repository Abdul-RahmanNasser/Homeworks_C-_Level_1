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
    if (num >= 1)
        for (int i = num; i >= 1; i--) {
            print_rows(num);
            cout << endl;
            num--;
        }
    else
        cout << "Invalid Input!";
}
int main()
{
    print_colomns(read_number());
    return 0;
}