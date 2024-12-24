#include <iostream>
using namespace std;
int main()
{
	// ( ( 5> 6 AND 7 <=8 ) OR ( 8 > 1 and 4 <= 3 ) ) AND True ?
	bool result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
	cout << "( ( 5 > 6 AND 7 <= 8 ) OR ( 8 > 1 and 4 <= 3 ) ) AND True = " << result << ".\n";
	return 0;
}