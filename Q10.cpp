// Program to define a function to accept an integer number and return its reverse (e.g. if the argument is 123 the return-value should be 321).Using this function display all palindrome numbers between a given range.

#include <iostream>

using namespace std;

int reverse(int num) {
	int rev = 0;

	while (num) {
		rev *= 10;
		rev += (num % 10);
		num /= 10;
	}

	return rev;
}

int main() {
	int num;

	cout << "Enter Range: ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (reverse(i) == i) {
			cout << i << '\n';
		}
	}
}
