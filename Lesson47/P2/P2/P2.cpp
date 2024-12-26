// Problem #27: Print Numbers from N to 1.
#include <iostream>
using namespace std;
int read_num() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	return n;
}
void print_num(int n) {
	for (int i = n; i > 0; i--) {
		cout << i << "." << endl;
	}
	cout << endl;
}
int main()
{
	print_num(read_num());
	return 0;
}