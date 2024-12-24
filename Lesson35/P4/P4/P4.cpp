#include <iostream>
using namespace std;
float area(float length, float width) {
    return length * width;
}
int main()
{
    // Problem #15: rectangle area.
    float length, width;
    cout << "Please, enter the length: ";
    cin >> length;
    cout << "Please, enter the width: ";
    cin >> width;
    cout << "The area of the rectangle = " << area(length, width) << " units.\n";
    return 0;
}