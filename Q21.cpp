// Find the sum of the first N natural numbers using loop.

#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;

	cout << "Enter Range : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	cout << "The Sum of " << n << " Natural Numbers is " << sum;
}

