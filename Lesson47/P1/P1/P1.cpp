// Problem #26: Print Numbers from 1 to N.
#include <iostream>
using namespace std;
int read_num() {
	int num;
	cout << "Please, enter a number: ";
	cin >> num;
	return num;
}
void print_nums(int num) {
	for (int i = 1; i <= num; i++) {
		cout << i << "." << endl;
	}
	cout << endl;
}
int main()
{
	print_nums(read_num());
	return 0;
}