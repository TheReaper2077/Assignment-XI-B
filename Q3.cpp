// To find sum of squares of first N natural numbers

#include <iostream>

using namespace std;

int main(int, char**) {
	int n, sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i*i;
	}

	cout << sum;
}
