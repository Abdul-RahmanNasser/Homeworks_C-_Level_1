#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	// Problem #16: Use pow inside sqrt.
	float diagonal, length;
	double area;
	cout << "PLease, enter the diagonal: ";
	cin >> diagonal;
	cout << "Please, enter the length: ";
	cin >> length;
	area = length * sqrt(pow(diagonal, 2) - pow(length, 2));
	cout << "The of the rectangle = " << area << ".\n";
	return 0;
}