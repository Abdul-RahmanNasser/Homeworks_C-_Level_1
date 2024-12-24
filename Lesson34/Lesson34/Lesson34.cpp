#include <iostream>
#include<string>
using namespace std;
void MySumProcedure() {
    int x, y, result;
    cout << "Please, enter your first number: ";
    cin >> x;
    cout << "Please, enter your second number: ";
    cin >> y;
    result = x + y;
    cout << "The sum of your numbers = " << result << ".\n";
}
int MySumFunction() {
    int x, y;
    cout << "Please, enter your first number: ";
    cin >> x;
    cout << "Please, enter your second number: ";
    cin >> y;
    return x + y;
}
int main()
{
    MySumProcedure();
    cout << MySumFunction() << ".\n";
    return 0;
}