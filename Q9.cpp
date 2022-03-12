// Define a function to find factorial of a number.Using this function find the value of nCr.

#include <iostream>

using namespace std;

int factorial(int num) {
	if (num == 1 || num == 0) return 1;
	return factorial(num-1)*num;
}

int main() {
	int n, r, ncr;

	cout <<  "Enter n and r";
	cin >> n >> r;

	ncr = factorial(n)/(factorial(n - r)*factorial(r));

	cout << "nCr = " << ncr;
}
