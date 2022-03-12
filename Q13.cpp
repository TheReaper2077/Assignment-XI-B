// Input two years and display all leap years between them

#include <iostream>

using namespace std;

int main() {
	int year_a, year_b;

	cout << "Enter 2 Years : ";
	cin >> year_a >> year_b;

	for (int i = year_a; i <= year_b; i++) {
		if (i % 4 == 0)
			cout << i << '\n';
	}
}

