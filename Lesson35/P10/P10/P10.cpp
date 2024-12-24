#include <iostream>
#include<cmath>
using namespace std;
double area(float a, float b) {
    const float PI = 3.14;
    return PI * pow(b, 2) * (2 * a - b) / (4 * (2 * a + b));
}
int main()
{
    // Problem #22: Circle Area Inscribed in an Isosceles Triangle.
    float a, b;
    cout << "Please, enter a: ";
    cin >> a;
    cout << "Please, enter b: ";
    cin >> b;
    cout << "The area of the circle = " << area(a, b) << " square units.\n";
    return 0;
}