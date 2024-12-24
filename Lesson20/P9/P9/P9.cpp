#include <iostream>
using namespace std;
int main()
{
    //Problem #20
    const float PI = 3.14;
    float length, area;
    cout << "Please, enter the length: ";
    cin >> length;
    area = (PI * length * length) / 4;
    cout << "The of area of circle = " << area << " units.\n";
    return 0;
}