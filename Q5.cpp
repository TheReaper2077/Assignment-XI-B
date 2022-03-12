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

int main(int, char**) {
	int num;

	cin >> num;

	cout << find_binary(num);
}
