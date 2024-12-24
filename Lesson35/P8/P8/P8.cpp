#include <iostream>
#include<cmath>
using namespace std;
double area(float A) {
    const float PI = 3.14;
    return PI * pow(A / 2, 2);
}
int main()
{
    // Problem #20: Circle area inscribed in a square.
    float A;
    cout << "Please, enter A: ";
    cin >> A;
    cout << "The of area of the circle = " << area(A) << " square units.\n";
    return 0;
}