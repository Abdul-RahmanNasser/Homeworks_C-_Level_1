#include <iostream>
using namespace std;
int main()
{
    //Problem #10
    float mark1, mark2, mark3, avg;
    cout << "Please, enter your first mark: ";
    cin >> mark1;
    cout << "Please, enter your second mark: ";
    cin >> mark2;
    cout << "Please, enter your third mark: ";
    cin >> mark3;
    avg = (mark1 + mark2 + mark3) / 3;
    cout << "The average of your 3 marks = " << avg << ".\n";
    return 0;
}