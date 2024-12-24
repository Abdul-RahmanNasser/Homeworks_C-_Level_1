#include <iostream>
using namespace std;
int main()
{
	// ( 7 < 7 ) OR ( 7 > 5 ) ?
	bool result = 7 < 7 || 7 > 5;
	cout << "( 7 < 7 ) OR ( 7 > 5 ) = " << result << ".\n";
	return 0;
}