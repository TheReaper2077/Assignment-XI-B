// Define a function to swap contents of two variables

#include <iostream>

using namespace std;

void swap(int &var1, int &var2) {
	int tmp = var1;
	var1 = var2;
	var2 = tmp;
}

int main() {
	int a = 10, b = 20;

	cout << a << ' ' << b << '\n';

	swap(a, b);
	// Now a = 20, b = 10;
	
	cout << a << ' ' << b << '\n';
}

