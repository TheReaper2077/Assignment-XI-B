// To input three numbers and find the difference between smallest and largest numbers.

#include <iostream>

using namespace std;

int main() {
	int a, b, c, largest, smallest;

	cout << "Enter 3 numbers";
	cin >> a >> b >> c;

	// Find Largest
	if (a > b) {
		if (a > c) {
			largest = a;
		} else {
			largest = c;
		}
	} else {
		if (b > c) {
			largest = b;
		} else {
			largest = c;
		}
	}

	// Find Smallest
	if (a < b) {
		if (a < c) {
			smallest = a;
		} else {
			smallest = c;
		}
	} else {
		if (b < c) {
			smallest = b;
		} else {
			smallest = c;
		}
	}

	int difference = largest - smallest;
	cout << "Difference = ";
	cout << difference;
}
