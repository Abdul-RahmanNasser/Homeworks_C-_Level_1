#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #20: After finding the result use ceil and print the final results.
	const float PI = 3.14;
	double area, length;
	cout << "Please, enter the length: ";
	cin >> length;
	area = PI * pow(length / 2, 2);
	cout << "The area of the circle = " << area << " units.\n";
	cout << "The final result of the area = " << ceil(area) << " units." << endl;
	return 0;
}