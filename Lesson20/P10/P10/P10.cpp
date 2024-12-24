#include <iostream>
using namespace std;
int main()
{
	//Problem #21
	const float PI = 3.14;
	float L, area;
	cout << "Please, enter the circumference: ";
	cin >> L;
	area = (L * L) / (4 * PI);
	cout << "The area of the circle = " << area << " units.\n";
	return 0;
}