#include <iostream>
#include<cmath>
using namespace std;
double area(float l) {
    const float PI = 3.14;
    return pow(l / 2, 2) / PI;
}
int main()
{
    // Problem #21: Circle Area Along the Circumference.
    float l;
    cout << "Please, enter l: ";
    cin >> l;
    cout << "The area of the circle = " << area(l) << " square units.\n";
    return 0;
}