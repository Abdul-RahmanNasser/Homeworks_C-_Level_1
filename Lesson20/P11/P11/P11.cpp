#include <iostream>
using namespace std;
int main()
{
	//Problem #22
	const float PI = 3.14;
	float a, b, area, t;
	cout << "Please, enter a = ";
	cin >> a;
	cout << "Please, enter b = ";
	cin >> b;
	t = (2 * a - b) / (2 * a + b);
	area = PI * b * b * t / 4;
	cout << "The area of the circle = " << area << " units.\n";
	return 0;
}