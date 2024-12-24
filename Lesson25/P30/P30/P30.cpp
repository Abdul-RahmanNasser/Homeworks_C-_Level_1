#include <iostream>
using namespace std;
int main()
{
	// ( ( 5 > 6 AND NOT ( 7 <= 8 ) ) AND ( 8 > 1 OR 4 <= 3 ) ) OR True ?
	bool result = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true;
	cout << "( ( 5 > 6 AND NOT ( 7 <= 8 ) ) AND ( 8 > 1 OR 4 <= 3 ) ) OR True = " << result << ".\n";
	return 0;
}