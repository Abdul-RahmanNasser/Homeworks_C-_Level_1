#include <iostream>
#include<cmath>
using namespace std;
double area(float diameter) {
    const float PI = 3.14;
    return (PI * pow(diameter, 2)) / 4;
}
int main()
{
    // Problem #19: Circle area through diameter.
    float diameter;
    cout << "Please, enter the diameter: ";
    cin >> diameter;
    cout << "The area of the circle = " << area(diameter) << " square units.\n";
    return 0;
}