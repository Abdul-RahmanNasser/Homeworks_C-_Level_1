#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #22: After finding the result use floor and print the final results.
	const float PI = 3.14;
	double a, b, area;
	cout << "Please, enter a = ";
	cin >> a;
	cout << "Please, enter b = ";
	cin >> b;
	area = PI * pow(b / 2, 2) * (2 * a - b) / (2 * a + b);
	cout << "The area of the circle = " << area << " units." << endl;
	cout << "The final result of the area = " << floor(area) << " units.\n";
	return 0;
}