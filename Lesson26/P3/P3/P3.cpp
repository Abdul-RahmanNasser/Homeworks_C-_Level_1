#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #19: After finding the result use ceil and print the final result.
	const float PI = 3.14;
	double diameter, area;
	cout << "Please, enter the diameter: ";
	cin >> diameter;
	area = PI * pow(diameter, 2) / 4;
	cout << "The area of the circle = " << area << " units." << endl;
	cout << "The final result of the area = " << ceil(area) << " units.\n";
	return 0;
}