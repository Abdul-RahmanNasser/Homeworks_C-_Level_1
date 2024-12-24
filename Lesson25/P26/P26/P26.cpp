#include <iostream>
using namespace std;
int main()
{
	// NOT ( 5 > 6 and 7 = 7 ) OR ( 1 Or 0 ) ?
	bool result = !(5 > 6 && 7 == 7) || (1 || 0);
	cout << "NOT ( 5 > 6 and 7 = 7 ) OR ( 1 Or 0 ) = " << result << ".\n";
	return 0;
}