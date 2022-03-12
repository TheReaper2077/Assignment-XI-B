// Program to read n numbers into an array and display the numbers larger than the average value.

#include <iostream>

using namespace std;

int main() {
	int array[100], n, sum = 0;

	cout << "Enter Range : ";
	cin >> n;

	cout << "Enter Numbers for Array\n";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		sum += array[i];
	}

	float average = (float)sum/n;

	cout << "Numbers larger than Average are\n";
	for (int i = 0; i < n; i++) {
		if (array[i] > average)
			cout << array[i] << '\n';
	}
}

