// To find the binary equivalent of a decimal number with the help of user defined function.

#include <iostream>

using namespace std;

int find_binary(int num) {
	int res = 0;

	for (int i = 1; num; i *= 10) {
		res += (num % 2)*i;
		num /= 2;
	}

	return res;
}

int main() {
	int num;

	cout << "Enter Decimal Number: ";
	cin >> num;

	cout << "Binary Number = ";
	cout << find_binary(num);
}
