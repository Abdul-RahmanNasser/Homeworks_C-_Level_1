#include <iostream>
using namespace std;
int main()
{
	// ( 5 > 6 and 7 = 7 ) OR ( 1 Or 0 ) ?
	bool result = (5 > 6 and 7 == 7) || (1 || 0);
	cout << "( 5 > 6 and 7 = 7 ) OR ( 1 Or 0 ) = " << result << ".\n";
	return 0;
}