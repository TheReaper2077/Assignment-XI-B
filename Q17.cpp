// Program to create an array to store the heights of some students and sort the
// values.

#include <iostream>

using namespace std;

int main() {
	int array[100], n;

	cout << "Number of Students : ";
	cin >> n;

	cout << "Enter Student's Heights\n";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	// Sorting The Array In Ascending Order
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}

	cout << "Sorted Array\n";
	for (int i = 0; i < n; i++) {
		cout << array[i] << '\n';
	}
}

