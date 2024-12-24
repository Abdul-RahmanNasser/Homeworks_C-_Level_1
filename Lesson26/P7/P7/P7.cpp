#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #23: After finding the result rse round and print the final results.
	const float PI = 3.14;
	double area, a, b, c, p;
	cout << "Please, enter a = ";
	cin >> a;
	cout << "Please, enter b = ";
	cin >> b;
	cout << "Please, enter c = ";
	cin >> c;
	p = (a + b + c) / 2;
	area = PI * pow(a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
	cout << "The area of the circle = " << area << " units." << endl;
	cout << "The final area of the area = " << round(area) << " units.\n";
	return 0;
}