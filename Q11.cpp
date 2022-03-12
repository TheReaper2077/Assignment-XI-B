// To display first N terms of Fibonacci series.

#include <iostream>

using namespace std;

int main() {
	int n, tmp, first = 0, second = 1;

	cout << "Enter Range : ";
	cin >> n;

	while (n--) {
		cout << first << '\n';
		tmp = first;
		first = second;
		second += tmp;
	}
}

