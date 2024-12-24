#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #18: After finding the result use ceil and print the final result.
	float r, area;
	const float PI = 3.14;
	cout << "Please, enter the diameter: ";
	cin >> r;
	area = PI * pow(r, 2);
	cout << "The area of circle = " << area << " units." << endl;
	cout<< "The final result of area of circle = " << ceil(area) << " units.\n";
	return 0;
}