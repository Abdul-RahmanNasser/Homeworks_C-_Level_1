#include <iostream>
using namespace std;
int main()
{
    //Problem #15
    float length, width, area;
    cout << "Please, enter the length: ";
    cin >> length;
    cout << "Please,enter the width: ";
    cin >> width;
    area = length * width;
    cout << "The area of the rectangle = " << area << " units.\n";
    return 0;
}