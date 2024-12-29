#include <iostream>
using namespace std;
int read_number() {
    int num;
    cout << "Please, enter number of the numbers you want: ";
    cin >> num;
    return num;
}
void print_rows(int& num, int n) {
    for (int i = n; i <= num; i++)
        cout << i << " ";
}
void print_colomns(int num) {
    if (num >= 1) {
        int n = 1;
        for (int j = num; j >= 1; j--) {
            print_rows(num, n);
            cout << endl;
            n++;
        }
    }
    else
        cout << "Invalid Input!";
}
int main()
{
    print_colomns(read_number());
    return 0;
}