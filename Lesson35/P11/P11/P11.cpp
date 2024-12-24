#include <iostream>
#include<cmath>
using namespace std;
double area(float a, float b, float c) {
    const float PI = 3.14;
    double p = (a + b + c) / 2;
    return PI * pow(a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
}
int main()
{
    // Problem #23: Circle Area circle Described Around an Arbitrary Triangle.
    float a, b, c;
    cout << "Please, enter a: ";
    cin >> a;
    cout << "Please, enter b: ";
    cin >> b;
    cout << "Please, enter c: ";
    cin >> c;
    cout << "The area of the circle = " << area(a, b, c) << " square units.\n";
    return 0;
}