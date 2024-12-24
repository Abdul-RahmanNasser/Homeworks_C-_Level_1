#include <iostream>
using namespace std;
int main()
{
	// NOT ( 0 OR 1 ) ?
	bool result = !(0 || 1);
	cout << "NOT ( 0 OR 1 ) = " << result << ".\n";
	return 0;
}