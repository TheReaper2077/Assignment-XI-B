// Find the sum of digits of an integer number

#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;

	cout << "Enter Number: ";
	cin >> num;

	while (num) {
		sum += num % 10;
		num /= 10;
	}

	cout << "Sum of Digits = ";
	cout << sum << '\n';
}
