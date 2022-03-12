// Display even numbers between 100 and 200

#include <iostream>

using namespace std;

int main() {
	for (int i = 100; i <= 200; i++) {
		if (i % 2 == 0) {
			cout << i << '\n';
		}
	}
}
