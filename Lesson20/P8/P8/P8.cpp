#include <iostream>
using namespace std;
int main()
{
    //Problem #19
    const float PI = 3.14;
    float diameter, area;
    cout << "Please, enter the diameter: ";
    cin >> diameter;
    area = (PI * diameter * diameter) / 4;
    cout << "The area of circle = " << area << " units.\n";
    return 0;
}