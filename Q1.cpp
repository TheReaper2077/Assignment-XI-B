// Find the sum of digits of an integer number

#include <iostream>

using namespace std;

int main(int, char**) {
    int num, sum = 0;

	cin >> num;

	while (num) {
		sum += num % 10;
		num /= 10;
	}

	cout << sum << '\n';
}
