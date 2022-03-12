// display prime numbers between 100 and 200. (Use a function to check whether the number is prime or not. If it is prime the function should return 1, otherwise 0)

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
	for (int i = 100; i <= 200; i++) {
		if (is_prime(i)) {
			cout << i << '\n';
		}
	}
}

