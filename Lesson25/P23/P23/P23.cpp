#include <iostream>
using namespace std;
int main()
{
	// NOT ( 7 = 7 ) and ( 7 > 5 ) ?
	bool result = !(7 == 7) && 7 > 5;
	cout << "NOT ( 7 = 7 ) and ( 7 > 5 ) = " << result << ".\n";
	return 0;
}