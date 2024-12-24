#include <iostream>
using namespace std;
float area(float height, float length) {
    return (length * height) / 2;
}
int main()
{
    // Problem #17: Triangle area.
    float length, height;
    cout << "Please, enter the length: ";
    cin >> length;
    cout << "Please, enter the height: ";
    cin >> height;
    cout << "The area of the triangle = " << area(height, length) << " units.\n";
    return 0;
}