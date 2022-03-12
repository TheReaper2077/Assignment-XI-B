// Find the sum of the first N natural numbers using recursive function.

#include <iostream>

using namespace std;

int sum(int n) {
	if (n == 0) return 0;
	return sum(n - 1) + n;
}

int main() {
	int num;
	cout << "Enter Range : ";
	cin >> num;
	cout << "Sum = " << sum(num);
}

