#include <iostream>
#include<cmath>
using namespace std;
float area(float width, float diameter) {
    return width * sqrt(pow(diameter, 2) - pow(width, 2));
}
int main()
{
    // Problem #16: Rectangle area through diagonal and side area.
    float diameter, width;
    cout << "Please, enter the width: ";
    cin >> width;
    cout << "Please, enter the diameter: ";
    cin >> diameter;
    cout << "The area of the rectangle = " << area(width, diameter) << " units.\n";
    return 0;
}