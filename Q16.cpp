// Create a square matrix to display the same in matrix form. Find the sum of
// leading diagonal elements(from top left to bottom right) and off diagonal
// elements(top right to bottom left) separately.

#include <iostream>

using namespace std;

int main() {
	int matrix[100][100];
	int n = 5;

	cout << "Enter The numbers\n";
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> matrix[y][x];
		}
	}

	cout << "Numbers in Matrix are\n";
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cout << matrix[y][x] << '\t';
		}

		cout << '\n';
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += matrix[i][i];
	}

	cout << "Sum of Leading Diagonal Elements = " << sum << '\n';

	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += matrix[i][n - i - 1];
	}

	cout << "Sum of Off Diagonal Elements = " << sum << '\n';
}

