#include <iostream>
using namespace std;
int main()
{
    //Problem #17
    float length, height, area;
    cout << "Please, enter the length: ";
    cin >> length;
    cout << "Please, enter the width: ";
    cin >> height;
    area = (length * height) / 2;
    cout << "The area of the triangle = " << area << " units.\n";
    return 0;
}