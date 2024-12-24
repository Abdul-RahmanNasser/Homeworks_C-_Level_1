#include <iostream>
using namespace std;
enum gender{male,female};
enum ismarried{single,married};
enum favourite_color{black=10,white,blue,yellow,green,red};
int main()
{
	gender mygender;
	mygender=gender::male;
	ismarried Married;
	Married = ismarried::single;
	favourite_color mycolor;
	mycolor = favourite_color::green;
	cout << "*****************************************************************************************";
	cout << endl << "Name: Abdul-Rahman Nasser." << endl;
	cout << "Age: 23 years old." << endl;
	cout << "City: Giza." << endl;
	cout << "Country: Egypt." << endl;
	cout << "Monthly Salary: " << 3000 << " pounds.\n";
	cout << "Yearly Salary: " << 3000 * 12 << " pounds.\n";
	cout << "Gender: " << mygender << ".\n";
	cout << "Married: " << Married << ".\n";
	cout << "Favourite Color: " << mycolor << ".\n";
	cout << "*****************************************************************************************";
	cout << endl;
	return 0;
}