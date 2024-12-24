#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #21: After finding the rsult use floor and print the final results.
	const float PI = 3.14;
	double area, circumference;
	cout << "Please, enter the circumference: ";
	cin >> circumference;
	area = pow(circumference, 2) / (4 * PI);
	cout << "The area of the circle = " << area << " units." << endl;
	cout << "The final result of the area = " << floor(area) << " units.\n";
	return 0;
}