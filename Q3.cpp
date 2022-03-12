// To find sum of squares of first N natural numbers

#include <iostream>

using namespace std;

int main() {
	int n, sum = 0;

	cout << "Enter Range";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		sum += i*i;
	}

	cout << "Sum of Squares = " << sum;
}
