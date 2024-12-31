#include <iostream>
using namespace std;
void search() {
    int array[10] = { 10,20,44,55,33,22,99,88.99,100 }, index = 0;
    for (; index <= 9; index++) {
        if (array[index] == 20) {
            cout << "The index of the item is: " << ++index << ".\n";
            break;
        }
    }
}
int main()
{
    search();
    return 0;
}