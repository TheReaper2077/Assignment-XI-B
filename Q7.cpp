// Find all prime numbers below 100.

#include <iostream>

using namespace std;

int is_prime(int num) {
	if (num < 2)
		return 0;

	for (int i = 2; i <= num/2; i++) {
		if (num % i == 0)
			return 0;
	}

	return 1;
}

int main() {
	for (int i = 1; i < 100; i++) {
		if (is_prime(i)) {
			cout << i << '\n';
		}
	}
}
